import javax.swing.*;
import java.awt.*;

public class ResetPassword  {
	
	private JTextField emailField;
	private JTextField telephoneField;
	private JPasswordField passwordField;
	private JPasswordField passwordResetField;

	private JLabel emailLabel;
	private JLabel telephoneLabel;
    private JLabel passwordLabel;
	private JLabel passwordResetLabel;

	private JButton button;

	private ResetPasswordListener listener;

	public void init(JPanel panel) {
		panel.setLayout(null);
		listener = new ResetPasswordListener();

		emailLabel = new JLabel("邮箱:");
		emailLabel.setBounds(10, 20, 80, 25);
		panel.add(emailLabel);

		emailField = new JTextField(20);
		emailField.setBounds(100, 20, 165, 25);
		panel.add(emailField);
		
		telephoneLabel = new JLabel("电话号码:");
		telephoneLabel.setBounds(10, 50, 80, 25);
		panel.add(telephoneLabel);

		telephoneField = new JTextField(20);
		telephoneField.setBounds(100, 50, 165, 25);
		panel.add(telephoneField);

		passwordLabel = new JLabel("新密码:");
		passwordLabel.setBounds(10, 80, 80, 25);
		panel.add(passwordLabel);

		passwordField = new JPasswordField(20);
		passwordField.setBounds(100, 80, 165, 25);
		panel.add(passwordField);

		passwordResetLabel = new JLabel("再次输入密码:");
		passwordResetLabel.setBounds(10, 110, 80, 25);
		panel.add(passwordResetLabel);

		passwordResetField = new JPasswordField(20);
		passwordResetField.setBounds(100, 110, 165, 25);
		panel.add(passwordResetField);

		button = new JButton("ok!");
		button.setBounds(125, 140, 80, 25);
		panel.add(button);
		
		listener.setEmailField(emailField);
		listener.setTelephoneField(telephoneField);
		listener.setPasswordField(passwordField);
		listener.setPasswordResetField(passwordResetField);

		button.addActionListener(listener);
	}

	public void work() {
		JFrame jFrame = new JFrame("找回密码");
		jFrame.setSize(330, 200);

		JPanel jPanel = new JPanel();
		init(jPanel);
		jFrame.add(jPanel);
		jFrame.setVisible(true);
		jFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		listener.setResetPasswordWindow(jFrame);
	}

	public static void main(String[] args) {
		ResetPassword r = new ResetPassword();
		r.work();
	}
}
