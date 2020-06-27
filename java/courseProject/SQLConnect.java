import java.sql.*;

public class SQLConnect {

	private static String JDBC = "com.mysql.cj.jdbc.Driver";
	private static String userName = "root";
	private static String password = "bqlniubi";
	private static String url = "jdbc:mysql://localhost:3306/internet_cafe"
		+"?useSSL=false&&serverTimezone=UTC";
	private static Connection connection;

	public static Connection getConnection() {
		try {
			Class.forName(JDBC);
// 			System.out.println("Driver is already!");
			connection = DriverManager.getConnection(url, userName, password);
			if( connection != null ) {
// 				System.out.println("Connection is already!");
// 				System.out.println("===============================================");
			}
			else {
				return null;
			}
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return connection;
	}
}
