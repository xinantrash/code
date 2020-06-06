import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class LoginListener implements ActionListener {
	private JTextField accountField;
	private JPasswordField passwordField;
	private JFrame jFrame;
	private String JDBC = "com.mysql.cj.jdbc.Driver";
	private String userName = "root";
	private String password = "bqlniubi";
	private String url = "jdbc:mysql://localhost:3306/User"+
		"?useSSl=false&&serverTimezone=UTC";
	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;
	private boolean flag;

	public void setAccountField(JTextField accountField) {
		this.accountField = accountField;
	}

	public void setPasswordField(JPasswordField passwordField) {
		this.passwordField = passwordField;
	}

	public void setJFrame(JFrame jFrame) {
		this.jFrame = jFrame;
	}

	public void actionPerformed(ActionEvent event) {

		try {
			Class.forName(JDBC);
			System.out.println("Driver is already!");
			connection = DriverManager.getConnection(url, userName, password);
			if( connection == null ) {
				return;
			}
			System.out.println("Connection is already!");
			String account = accountField.getText();
			String password = String.valueOf(passwordField.getPassword());
			String sql = "select * from user";
			statement = connection.createStatement();
			resultSet = statement.executeQuery(sql);
			while( resultSet.next() ) {
				if( resultSet.getString("account").equals(account) && resultSet.getString("password").equals(password) ) {
					flag = true;
					break;
				}
				else {
					flag = false;
				}
			}

			if( flag == true ) {
				jFrame.dispose();
				loginSuccess();
			}
			else {
				jFrame.dispose();
				loginFail();
			}

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void loginSuccess() {
		JFrame frame = new JFrame();
		frame.setSize(350, 200);
		JPanel panel = new JPanel();
		panel.setLayout(null);
		JLabel label = new JLabel("login successfully!");
		label.setBounds(10, 20, 200, 25);
		panel.add(label);
		frame.add(panel);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}

	public void loginFail() {
		JFrame frame = new JFrame();
		frame.setSize(350, 200);
		JPanel panel = new JPanel();
		panel.setLayout(null);
		JLabel lLabel = new JLabel("login failed!");
		lLabel.setBounds(10, 20, 200, 25);
		JLabel fLabel = new JLabel("account or password incorrect!");
		fLabel.setBounds(10, 50, 300, 25);
		panel.add(lLabel);
		panel.add(fLabel);
		frame.add(panel);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}
}
