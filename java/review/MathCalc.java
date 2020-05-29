import java.util.Scanner;

public class MathCalc{

	public static void main(String[] args){

		int sum = 0;

		int[][] determinant = new int[3][3];
		Scanner in          = new Scanner(System.in);

		for(int i=0; i<determinant.length; i++){
			for(int j=0; j<determinant[0].length; j++){
				determinant[i][j] = in.nextInt();
			}
		}

		sum = determinant[0][0]*determinant[1][1]*determinant[2][2] + determinant[0][1]*determinant[1][2]*determinant[2][0] + determinant[2][1]*determinant[1][0]*determinant[0][2] - determinant[0][2]*determinant[1][1]*determinant[2][0] - determinant[0][1]*determinant[1][0]*determinant[2][2] - determinant[0][0]*determinant[1][2]*determinant[2][1];

		System.out.println(sum);
		in.close();
	}
}
