import java.util.Scanner;

public class Login {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		boolean flag = true;
		boolean emailFlag = false;
		String account;
		String password;
		String email;


		System.out.println("Please input your account:");
		account   = in.nextLine();

		System.out.println("Please input your password:");
		password = in.nextLine();

		System.out.println("Please input your email:");
		email = in.nextLine();

		if( account.length() < 4 ) {
			flag = false;
			System.out.println("Account number less than 4 digits");
		}

		if( password.length() < 6 ) {
			flag = false;
			System.out.println("Password length cannot be less than 6 digits");
		}

		for( int i=0; i<email.length(); ++i ) {
			if( email.charAt(i) == '@' ) {
				if( email.substring(email.length()-4).equals(".com") ) {
					emailFlag = true;
					break;
				}
				else {
					emailFlag = false;
				}
			}
			else {
				emailFlag = false;
			}
		}

		if( emailFlag == false ) {
			System.out.println("Incorrect mailbox format");
		}

		if( flag == true && emailFlag == true ) {
			System.out.println("Registration successful");
		}

		in.close();
	}
}
