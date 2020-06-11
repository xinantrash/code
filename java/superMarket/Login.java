import java.sql.*;
import java.util.Scanner;

public class Login {
	private String account;
	private String password;

	private boolean login() {
		Scanner in = new Scanner(System.in);
		account = in.nextLine();
		password = in.nextLine();
		if( account.equals("admin") && password.equals("123456") ) {
			return true;
		}
		else {
			return false;
		}
	}

	public boolean loginFail() {
		int nums = 0;
		for ( int i=1; i<=3; i++ ) {
			System.out.println("第"+i+"次输入密码, 密码错误3次则自动退出程序");
			if( this.login() == false ) {
				nums++;
			}
			else {
				break;
			}
		}
		
		if( nums == 3 ) {
			return false;
		}
		else {
			return true;
		}
	}
}
