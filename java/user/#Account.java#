import java.util.Scanner;

public class Account{
	private String account;
	private String password;
	public Account(){

	}

	public boolean isTrue(){
		Scanner in = new Scanner(System.in);
		account  = in.nextLine();
		password = in.nextLine();

		boolean isCorrect = false;
		if( account.equals("admin")&&password.equals("123456") ){
			isCorrect = true;
		}
		else{
			isCorrect = false;
		}
		
		in.close();
		return isCorrect;
	}
}
