import java.util.Arrays;
import java.util.Scanner;

// public class Exam {
// 	public static void main(String[] args) {
// 		Scanner in = new Scanner(System.in);
// 		String input = in.next();
// 		int sum = 0;
// 		String sArray[] = input.split(",");
// 		int a[] = new int[sArray.length];
// 
// 		for ( int i=0; i<a.length; i++ ) {
// 			a[i] = Integer.parseInt(sArray[i]);
// 			sum += a[i];
// 		}
// 
// 		System.out.println("average="+sum/a.length);
// 
// 		System.out.println("new order");
// 
// 		Arrays.sort(a);
// 
// 		for ( int i : a ) {
// 			System.out.print(i+" ");
// 		}
// 	}
// }

public class Exam {
	public static void main(String[] args) {
		int temp;
		Scanner in = new Scanner(System.in);

// 		do {
			temp = in.nextInt();
			if ( temp == -1 ) {
// 				break;
				return;
			}

			if ( temp > 0 && temp < 60 ) {
				System.out.print("D");
			}

			else if ( temp >= 60 && temp < 70 ) {
				System.out.print("C");
			}

			else if ( temp >= 70 && temp < 80 ) {
				System.out.print("B");
			}

			else if ( temp >= 80 && temp < 90 ) {
				System.out.print("A");
			}

			else if ( temp >= 90 && temp <= 100 ) {
				System.out.print("A+");
			}

			else {
				System.out.print("score is error");
			}
// 		} while ( temp != -1 );
	}
}
