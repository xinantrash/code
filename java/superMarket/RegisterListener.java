import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class RegisterListener implements ActionListener {
	private JTextField accountField;
	private JPasswordField passwordField;
	private JTextField telephoneField;
	private JTextField emailField;

	private String JDBC     = "com.mysql.cj.jdbc.Driver";
	private String userName = "root";
	private String password = "bqlniubi";
	private String url      = "jdbc:mysql://localhost:3306/User"+
		"?useSSl=false&&serverTimezone=UTC";
	private Connection connection;
	private Statement statement;

	public void setAccountField(JTextField accountField) {
		this.accountField = accountField;
	}

	public void setPasswordField(JPasswordField passwordField) {
		this.passwordField = passwordField;
	}

	public void setTelephoneField(JTextField telephoneField) {
		this.telephoneField = telephoneField;
	}

	public void setEmailField(JTextField emailField) {
		this.emailField = emailField;
	}

	public void actionPerformed(ActionEvent event) {
		try {
			Class.forName(JDBC);
			System.out.println("Driver is already!");
			connection = DriverManager.getConnection(url, userName, password);
			if( connection == null ) {
				return;
			}
			System.out.println("connection is already!");
			String account   = accountField.getText();
			String password  = String.valueOf(passwordField.getPassword());
			String telephone = telephoneField.getText();
			String email     = emailField.getText();
			String sql       = "insert into user (account,password,telephone,email) values ('"+account+"', '"+password+"', '"+telephone+"', '"+email+"')";
			statement = connection.createStatement();
			int flag = statement.executeUpdate(sql);
			if( flag == 1 ) {
				System.out.println("register successfully!");
				success();
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void success() {
		JFrame frame = new JFrame();
		frame.setSize(350, 200);
		JLabel label = new JLabel("register successfully!");
		JPanel panel = new JPanel();
		panel.add(label);
		frame.add(panel);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}
}
