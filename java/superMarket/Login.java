import javax.swing.*;
import java.awt.*;

public class Login {
	private JLabel accountLabel;
	private JTextField accountField;
	private JLabel passwordLabel;
	private JPasswordField passwordField;
	private JButton button;
	private LoginListener listener;

	public void init(JPanel panel) {
		panel.setLayout(null);
		listener = new LoginListener();
		accountLabel = new JLabel("account:");
		accountField = new JTextField(20);
		passwordLabel = new JLabel("password:");
		passwordField = new JPasswordField(20);
		button = new JButton("ok!");
		
		accountLabel.setBounds(10, 20, 80, 25);
		accountField.setBounds(100, 20, 165, 25);
		passwordLabel.setBounds(10, 50, 80, 25);
		passwordField.setBounds(100, 50, 165, 25);
		button.setBounds(125, 80, 80, 25);
		
		listener.setAccountField(accountField);
		listener.setPasswordField(passwordField);
		button.addActionListener(listener);

		panel.add(accountLabel);
		panel.add(accountField);
        panel.add(passwordLabel);
        panel.add(passwordField);
        panel.add(button);
	}

	public void work() {
		JPanel panel = new JPanel();
		JFrame frame = new JFrame("login");	
		frame.setSize(350, 150);
		init(panel);
		frame.add(panel);
		frame.setVisible(true);
		listener.setJFrame(frame);
	}

	public static void main(String[] args) {
		Login login = new Login();
		login.work();
	}
}
