import java.util.Properties;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.sql.*;

public class Test1 {

	private String JDBC;
	private String userName;
	private String password;
	private String url;
	private Connection connection;
	private Statement statement;
	private ResultSet resultSet;

	public void loadFile() throws Exception {
		Properties properties = new Properties();
		FileReader filreader = new FileReader("/home/alex/Documents/test.txt");
		properties.load(filreader);
		filreader.close();

		JDBC     = properties.getProperty("jdbc");
		userName = properties.getProperty("user");
		password = properties.getProperty("password");
		url      = properties.getProperty("url");

		Class.forName(JDBC);
		connection = DriverManager.getConnection(url, userName, password);
		if( connection != null ) {
			System.out.println("success!");
		}
	}

	public static void main(String[] args) {
		Test1 test = new Test1();
		try {
			test.loadFile();
		} catch (IOException e) {
			e.printStackTrace();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
