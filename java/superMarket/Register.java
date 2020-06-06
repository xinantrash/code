import javax.swing.*;
import java.awt.*;

public class Register {
	private JLabel accountLabel;
	private JTextField accountField;
	private JLabel passwordLabel;
	private JPasswordField passwordField;
	private JLabel telephoneLabel;
	private JTextField telephoneField;
	private JLabel emailLabel;
	private	JTextField emailField;
	private JButton button;
	private HandleListener listener;
	
	public void init(JPanel panel) {
		panel.setLayout(null);
		listener = new HandleListener();

		accountLabel = new JLabel("account:");
		accountLabel.setBounds(10, 20, 80, 25);
		panel.add(accountLabel);

		accountField = new JTextField(20);
		accountField.setBounds(100, 20, 165, 25);
		panel.add(accountField);

		passwordLabel= new JLabel("password:");
		passwordLabel.setBounds(10, 50, 80, 25);
		panel.add(passwordLabel);

		passwordField = new JPasswordField(20);
		passwordField.setBounds(100, 50, 165, 25);
		panel.add(passwordField);

		telephoneLabel = new JLabel("telephone:");
		telephoneLabel.setBounds(10, 80, 80, 25);
		panel.add(telephoneLabel);

		telephoneField = new JTextField(20);
		telephoneField.setBounds(100, 80, 165, 25);
		panel.add(telephoneField);

		emailLabel = new JLabel("email:");
		emailLabel.setBounds(10, 110, 80, 25);
		panel.add(emailLabel);

		emailField = new JTextField(20);
		emailField.setBounds(100, 110, 165, 25);
		panel.add(emailField);

		button = new JButton("ok!");
		button.setBounds(125, 140, 80, 25);
		panel.add(button);

		listener.setAccountField(accountField);
		listener.setPasswordField(passwordField);
		listener.setTelephoneField(telephoneField);
		listener.setEmailField(emailField);

		button.addActionListener(listener);
	}

	public void work() {
		JFrame jFrame = new JFrame("Register");
		jFrame.setSize(330, 200);
		jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JPanel jPanel = new JPanel();
		jFrame.add(jPanel);
		init(jPanel);
		jFrame.setVisible(true);
	}

	public static void main(String[] args) {
		Register register = new Register();
		register.work();
	}
}
