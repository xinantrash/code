import java.util.Scanner;

public class InputScore {
	
	private Scanner in = new Scanner(System.in);
	private double[] score;
	private double max;
	private double min;
	private int number;

	public int num() {
		this.number = in.nextInt();

		return number;
	}

	public void input() {
		score     = new double[number];
		for( int index = 0; index < number; index++ ) {
			score[index] = in.nextDouble();
		}

		in.close();

		DelScore del = new DelScore();
		max          = del.maximum(score);
		min          = del.minimum(score);
		score        = del.delete(score);

		System.out.println("del the highest score:"+max+",del minimum score :"+min+". Player's final score "+del.average(score));

	}
}
