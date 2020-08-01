import java.awt.event.*;
import java.sql.*;

import javax.swing.*;


public class ResetPasswordListener implements ActionListener {

	private JTextField emailField;
	private JTextField telephoneField;
	private JPasswordField passwordField;
	private JPasswordField passwordResetField;

	private JFrame resetPasswordWindow;

	private Connection connection;

	public void setEmailField(JTextField emailField) {
		this.emailField = emailField;
	}

	public void setTelephoneField(JTextField telephoneField) {
		this.telephoneField = telephoneField;
	}

	public void setPasswordField(JPasswordField passwordField) {
		this.passwordField = passwordField;
	}

	public void setPasswordResetField(JPasswordField passwordResetField) {
		this.passwordResetField = passwordResetField;
	}

	public void setResetPasswordWindow(JFrame resetPasswordWindow) {
		this.resetPasswordWindow = resetPasswordWindow;
	}

	public void actionPerformed(ActionEvent event) {
		if ( passwordResetField.getPassword() == passwordField.getPassword() ) {
			resetFail();
			return;
		}

		String sqlReset = "update register set password = '"
			+String.valueOf(passwordField.getPassword())+"' "
			+"where phoneNumber = '"+telephoneField.getText()
			+"' and keyword = '"+emailField.getText()+"';";
		try {
			connection = SQLConnect.getConnection();
			PreparedStatement preparedStatement = connection.prepareStatement(sqlReset);
			int flag = preparedStatement.executeUpdate();
			if ( flag == 1 ) {
				resetSuccess();
			} 
			else {
				resetFail();
			}
		} catch (Exception e) {
			e.printStackTrace();
		} 
	}

	public void resetSuccess() {
		JOptionPane.showMessageDialog(null, "修改成功", "Tips", JOptionPane.INFORMATION_MESSAGE);
		resetPasswordWindow.dispose();
	}

	public void resetFail() {
		JOptionPane.showMessageDialog(null, "修改失败", "Tips", JOptionPane.INFORMATION_MESSAGE);
	}
}
