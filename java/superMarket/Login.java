import java.util.Scanner;

public class Login {
	private String account;
	private String password;
	
	
	public void get() {
		Scanner in = new Scanner(System.in);
		account    = in.nextLine();
		password   = in.nextLine();
	}

	public void login() {
		boolean flag;
		if( account.equals("admin") && password.equals("123456")) {
			flag = true;
		}
		else {
			flag = false;
		}

		if( flag ) {
			System.out.println("login successful");
		}
		else {
			System.out.println("login failed.");
		}
	}
}
