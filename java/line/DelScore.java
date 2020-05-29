import java.util.Arrays;

public class DelScore {
	private ComputerAver aver = new ComputerAver();

	public double[] delete(double[] score) {
		double[] temp = score;
		Arrays.sort(temp);
		temp[0] = 0;
		temp[temp.length-1] = 0;

		return temp;
	}

	public double average(double[] score) {
		return aver.average(score);
	}

	public double maximum(double[] score) {
		return aver.maximum(score);
	}

	public double minimum(double[] score) {
		return aver.minimum(score);
	}
	
}
