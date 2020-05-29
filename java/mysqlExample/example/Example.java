package example;

import java.util.Scanner;
import java.sql.*;

public class Example {
	private String JDBC = "com.mysql.cj.jdbc.Driver";
	private String userName = "root";
	private String password = "bqlniubi";
	private String url = "jdbc:mysql://localhost:3306/User"+
		"?useSSl=false&&serverTimezone=UTC";
	private Connection connection;
	private ResultSet resultSet;
	private Statement statement;

	public Connection getConnection() {
		try {
			Class.forName(JDBC);
			System.out.println("Driver is already!");
			connection = DriverManager.getConnection(url, userName, password);
			System.out.println("Connect successfully!");

			return connection;
		} catch (ClassNotFoundException e) {
			e.printStackTrace();

			return null;
		} catch (SQLException e) {
			e.printStackTrace();

			return null;
		}
	} 

	public void select() {
		try {
			String sql = "select * from users";
			if( connection == null ) {
				return;
			}
        	
			statement = connection.createStatement();
        	
			resultSet = statement.executeQuery(sql);
        	
			while( resultSet.next() ) {
				System.out.println("account:"+resultSet.getString("account")+
						", password:"+resultSet.getString("password")+
						", name:"+resultSet.getString("name")+", sex:"+
						resultSet.getString("sex"));
			}

		} catch (SQLException e) {
			e.printStackTrace();
		} finally {

			try {
				resultSet.close();
				connection.close();
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}

	public void add() {

		try {
			if( connection == null ) {
				return;
			}
			Scanner in      = new Scanner(System.in);
			String account  = in.nextLine();
			String password = in.nextLine();
			String name     = in.nextLine();
			String gender   = in.nextLine();

			String sql = "insert into users (account,password,name,sex) values ('"+account+"', '"+password+"', '"+name+"', '"+gender+"')";
			statement = connection.createStatement();
			statement.executeUpdate(sql);
		} catch (Exception e) {
			e.printStackTrace();
		} 	
	}

	public void add2() {
		try {
			if( connection == null ) {
				return;
			}
			Scanner in      = new Scanner(System.in);
			String account  = in.nextLine();
			String password = in.nextLine();
			String name     = in.nextLine();
			String gender   = in.nextLine();
			String sql = "insert into users values (?,?,?,?);";
			PreparedStatement preparedStatement = connection.prepareStatement(sql);

			preparedStatement.setString(1, account);
			preparedStatement.setString(2, password);
			preparedStatement.setString(3, name);
			preparedStatement.setString(4, gender);

			preparedStatement.executeUpdate();

			in.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void delete() {
		try {
			if( connection == null ) {
				return;
			}

			System.out.println("请输入删除的用户:");
			Scanner in = new Scanner(System.in);
			String account = in.nextLine();

			String sql = "delete from users where account='"+account+"';";
			statement = connection.createStatement();
			statement.executeUpdate(sql);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void update() {
		try {
			if( connection == null ) {
				return;
			}
			System.out.println("请输入用户名:");
			Scanner in = new Scanner(System.in);
			String account = in.nextLine();
			System.out.println("请输入新密码:");
			String password = in.nextLine();
			String sql = "update users set password = '"+password+"' where account = '"+account+"';";
			PreparedStatement preparedStatement = connection.prepareStatement(sql);
			preparedStatement.executeUpdate();
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) {
		Example example = new Example();
		example.getConnection();
		example.add();
// 		example.add2();
// 		example.delete();
 		example.update();
		example.select();
	}
}
