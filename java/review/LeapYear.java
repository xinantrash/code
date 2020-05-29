// import java.util.Scanner;

// public class LeapYear{

	// public static void main(String[] args){
		// Scanner in = new Scanner(System.in);
		
		// System.out.println("Please input a year ");
		// int year = in.nextInt();

		// if( year%4==0 && year%100!=0 ){
			// System.out.println(year+" is leap year");
		// }
		// else if( year%400==0 ){
			// System.out.println(year+" is leap year");
		// }
		// else{
			// System.out.println(year+" is not leap year");
		// }

		// in.close();
	// }
// }

import java.util.Scanner;

public class LeapYear{

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		System.out.println("Please input a year");
		while( true ){
			int year = in.nextInt();
			if( year%4==0 && year%100!=0 ){
				System.out.println(year+" is leap year");
				break;
			}
			else if( year%400==0 ){
				System.out.println(year+" is leap year");
				break;
			}
			else{
				System.out.println(year+" is not leap year");
				break;
			}
		}

		in.close();
	}
}
