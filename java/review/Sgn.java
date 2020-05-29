// import java.util.Scanner;

// public class Sgn{

	// public static void main(String[] args){
		// Scanner in = new Scanner(System.in);
		// System.out.println("Please input a number");
		// double x = in.nextDouble();

		// if( x>0 ){
			// System.out.println("1");
		// }
		// else if( x<0 ){
			// System.out.println("-1");
		// }
		// else if( x==0 ){
			// System.out.println("0");
		// }
		
		// in.close();
	// }
// }

import java.util.Scanner;

public class Sgn{

	public int castInt(int number){
		int judge = 0;
		if( number>0 ){
			judge = 1;
		}
		else if( number<0 ){
			judge = -1;
		}
		else{
			judge = 0;
		}

		return judge;
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		Sgn sgn    = new Sgn();
		System.out.println("Please input a number");
		int x = in.nextInt();

		switch(sgn.castInt(x)){
			case 0:
				System.out.println("0");
				break;
			
			case 1:
				System.out.println("1");
				break;

			case -1:
				System.out.println("-1");
				break;
		}
		
		in.close();
	}
}
