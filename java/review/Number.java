import java.util.Scanner;

public class Number{

	public static void main(String[] args){

		Scanner in = new Scanner(System.in);
		int x    = 0;
		double n = 0;

		x = in.nextInt();

		if( x!=0 ){
			n = 1.0/x;
			System.out.println("Result is "+n);
		}
		else{
			System.out.println("input error");
		}

		in.close();
	}
}
