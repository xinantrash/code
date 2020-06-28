import java.awt.event.*;
import java.awt.*;
import javax.swing.*;
import java.sql.*;

public class CommodityWindowListener implements ActionListener {

	private JTextArea commodityArea;
	private JTextField commodityField;
	private JTextField commodityNums;

	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;

	private StringBuffer commodityBuffer;
	private Integer totalMoney = 0;

	public JTextArea getCommodityArea() {
		return commodityArea;
	}

	public void setCommodityField(JTextField commodityField) {
		this.commodityField = commodityField;
	}

	public void setCommodityNums(JTextField commodityNums) {
		this.commodityNums = commodityNums;
	}
	
	// get the totalMoney
	public Integer getTotalMoney() {
		return totalMoney;
	}

	// print the commodity messages
	public void print() {
		String sqlList = "select * from commodity;";
		commodityBuffer = new StringBuffer();
		try {
			connection = SQLConnect.getConnection();
			statement = connection.createStatement();
			resultSet = statement.executeQuery(sqlList);

			// put the commodity messages into a stringbuffer
			while ( resultSet.next() ) {
				commodityBuffer.append(resultSet.getString("number")+" - "+resultSet.getString("name")+"\n");
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		// show the commodity messages on window
		commodityArea = new JTextArea(commodityBuffer.toString());
	}
	
	// click button to purchase the commodity
	public void actionPerformed(ActionEvent event) {
		String sqlSelect = "select * from commodity;";
		String commodityInput = commodityField.getText();
		Integer nums = Integer.parseInt(commodityNums.getText());
		boolean flag = false;

		try {
			statement = connection.createStatement();
			resultSet = statement.executeQuery(sqlSelect);
			
			// search commodity from mysql
			while ( resultSet.next() ) {
				if ( commodityInput.equals(resultSet.getString("number")) ) {
					flag = true;
					if ( nums <= 0 ) {
						numsIszero();
					}
					if ( nums > 0 ) {
						Integer commodityAmount = resultSet.getInt("account");

						// calculate the totalMoney
						totalMoney = nums * resultSet.getInt("price");

						// update the database
						updateCommodity(commodityAmount, nums, commodityInput);

						// a window to remind the customer
						purchaseSuccess();
					}
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}

		if ( flag == false ) {
			purchaseFail();
		}
	}

	private void updateCommodity(Integer commodityAmount , Integer nums, String commodityInput) {
		try {
			String updateSql = "update commodity set account = "
					+(commodityAmount-nums)+" where number = '"+ commodityInput
					+"';";
			PreparedStatement preparedStatement 
				= connection.prepareStatement(updateSql);
			preparedStatement.executeUpdate();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		
	}

	// purchase successfully window
	private void purchaseSuccess() {
		JFrame frame = new JFrame();
		Font font = new Font("微软雅黑", Font.BOLD, 20);
		frame.setSize(200, 135);
		JPanel panel = new JPanel();
		panel.setLayout(null);
		JLabel label = new JLabel("购买成功!");
		label.setFont(font);
		label.setBounds(50, 50, 200, 25);
		panel.add(label);
		frame.add(panel);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}

	private void numsIszero() {
		JFrame frame = new JFrame();
		Font font = new Font("微软雅黑", Font.BOLD, 20);
		frame.setSize(400, 135);
		JPanel panel = new JPanel();
		panel.setLayout(null);
		JLabel label = new JLabel("购买数量不能为0或小于0!");
		label.setFont(font);
		label.setBounds(50, 50, 400, 25);
		panel.add(label);
		frame.add(panel);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}

	private void purchaseFail() {
		JFrame frame = new JFrame();
		Font font = new Font("微软雅黑", Font.BOLD, 20);
		frame.setSize(400, 135);
		JPanel panel = new JPanel();
		panel.setLayout(null);
		JLabel label = new JLabel("无效的商品代码!");
		label.setFont(font);
		label.setBounds(50, 50, 400, 25);
		panel.add(label);
		frame.add(panel);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}
}
