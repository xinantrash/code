import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class Test {

	private String account;
	private String password;
	private String name;
	private String sex;

	public void test() {

		Scanner in = new Scanner(System.in);

		account  = in.nextLine();
		password = in.nextLine();
		name     = in.nextLine();
		sex      = in.nextLine();

		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/User?useSSL=false&serverTimezone=UTC","root","bqlniubi");
			Statement sta = con.createStatement();
			if(!con.isClosed()) {
				System.out.println("success!");
			}
			String sql = "insert into users (account,password,name,sex) values('"+account+"','"+password+"','"+name+"','"+sex+"')";
			System.out.println(sql);
			int i = sta.executeUpdate(sql);
			System.out.println(i);
		} catch (Exception e) {
			e.printStackTrace();
		}

		in.close();
	}

	public static void main(String[] args) {
		Test t = new Test();
		t.test();
	}
}
