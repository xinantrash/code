import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class CommodityWindowListener {

	private JTextArea commodityArea;
	private JTextfield commodityField;
	private JLabel commodityLabel;

	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;

	private StringBuffer commodityBuffer;

	public JTextArea getCommodityArea() {
		return commodityArea;
	}

	public void setCommodityField(JTextField commodityField) {
		this.commodityField = commodityField;
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
				commodityBuffer.append(resultSet.getString("name\n"));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		// show the commodity messages on window
		commodityArea = new JTextArea(commodityBuffer.toString());
	}
	
	// click button to purchase the commodity
	public void actionPerformed() {
		String sqlSelect = "select * from commodity;";
		String commodityInput = commodityField.getText();

		try {
			statement = connection.createStatement();
			resultSet = statement.executeQuery(sqlSelect);
			
			// search commodity from mysql
			while ( resultSet.next() ) {
				if (  )
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) {
		CommodityWindowListener c = new CommodityWindowListener();
		
	}
}
