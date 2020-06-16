import java.util.Scanner;
import java.sql.*;

public class CheckGoods {
	private int price;
	private int number;
	private String name;
	private String code;

	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;

	public void insertGoods() {
		System.out.println("name 	number    price    code");
		Scanner in = new Scanner(System.in);
		name   = in.next();
		number = in.nextInt();
		price  = in.nextInt();
		code   = in.next();
		System.out.println("================================================");

		try {
			connection = SQLConnect.getConnection();
			if( connection == null ) {
				return;
			}
			String sql = "insert into goods (price,number,name,code) values ("+price+", "+number+", '"+name+"', '"+code+"')";
			statement = connection.createStatement();
			int flag = statement.executeUpdate(sql);
			if( flag == 1 ) {
				System.out.println("success!");
			}
		} catch (Exception e) {
			e.printStackTrace();
		} 
	}

	public void checkGoods() {
		try {
			connection = SQLConnect.getConnection();
			String checkSql = "select * from goods";
			statement = connection.createStatement();
			resultSet = statement.executeQuery(checkSql);
			while( resultSet.next() ) {
				System.out.println("name:"+resultSet.getString("name")+", number:"+resultSet.getInt("number")+", price:"+resultSet.getInt("price")+", code:"+resultSet.getString("code"));
			}
		} catch (SQLException e) {
			e.printStackTrace();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void deleteGoods() {
		try {
			connection = SQLConnect.getConnection();
			if( connection == null ) {
				return;
			}
			Scanner in = new Scanner(System.in);
			String name = in.nextLine();
			String deleteSql = "delete from goods where name='"+name+"';";
			statement = connection.createStatement();
			int flag = statement.executeUpdate(deleteSql);
			if( flag == 1 ) {
				System.out.println("success!");
			}
		} catch (Exception e) {
			e.printStackTrace();
		} 
	}
// 
// 	public void updateGoods() {
// 		try {
// 			connection = SQLConnect.getConnection();
// 			if( connection == null ) {
// 				return;
// 			}
// 			Scanner in = new Scanner(System.in);
// 			String name = in.nextLine();
// 		}
// 	}
}
