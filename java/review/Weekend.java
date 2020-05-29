import java.util.Scanner;

public class Weekend{

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		String day = new String();
		System.out.println("Please input a number[1-7],Q end");
		day = in.nextLine();

		switch(day.charAt(0)){
			case '1':
				System.out.println("Monday");
				break;

			case '2':
				System.out.println("Tuesday");
				break;

			case '3':
				System.out.println("Wednesday");
				break;

			case '4':
				System.out.println("Thursday");
				break;

			case '5':
				System.out.println("Friday");
				break;

			case '6':
				System.out.println("Saturday");
				break;

			case '7':
				System.out.println("Sunday");
				break;

			case 'Q':
				break;

			default:
				System.out.println("error input");
				break;
		}
		
		in.close();
	}
}
