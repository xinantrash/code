import javax.swing.*;

import java.awt.event.*;
import javax.swing.table.DefaultTableModel;

import java.awt.*;
import java.sql.*;
import java.util.Vector;

public class CheckCommodity {
	private JScrollPane showPurchasepPane;
	private JButton button;
	private JPanel panel;
	private JFrame frame = new JFrame();

	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;

	public void initWindow() {
		Vector data = new Vector<>();
        Vector tableHead = new Vector<>();
        Vector<Object> v = new Vector<>();

        panel = new JPanel();
        panel.setLayout(null);
		try {
			//TODO 连接数据库
			connection = SQLConnect.getConnection();
			String sql = "select * from sale";
			statement = connection.createStatement();
			resultSet = statement.executeQuery(sql);
        	
			while ( resultSet.next() ) {
				v.clear();
				v.add(resultSet.getObject(1));
				v.add(resultSet.getObject(2));
				v.add(resultSet.getObject(3));
				v.add(resultSet.getObject(4));
				data.add(v.clone());
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		tableHead.add("商品编号");
		tableHead.add("商品名");
		tableHead.add("商品价格");
		tableHead.add("商品数量");
		
		JTable table = new JTable(new DefaultTableModel(data, tableHead));
		Font font = new Font("微软雅黑", Font.BOLD, 14);
		table.setFont(font);
		table.setEnabled(false);
		table.setDragEnabled(false);
		showPurchasepPane = new JScrollPane(table);
		showPurchasepPane.setBounds(0, 0, 500, 350);
		panel.add(showPurchasepPane);

		button = new JButton("刷新");
		button.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent event) {
				workWindow();
			}
		});
		button.setBounds(210, 365, 80, 25);
		panel.add(button);
	}

	public void workWindow() {
		frame.setSize(500, 400);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		initWindow();
		frame.add(panel);
		frame.setVisible(true);
	}

	public static void main(String[] args) {
		CheckCommodity c = new CheckCommodity();
		c.workWindow();
	}
}
