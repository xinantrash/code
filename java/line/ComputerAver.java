public class ComputerAver {

	public double average(double[] score) {
		double sum = 0.0;

		for( int index = 0; index < score.length; index++ ) {
			sum += score[index];
		}

		return sum/(score.length-2);
	}

	public double maximum(double[] score) {
		double max = score[0];
		for( int index = 0; index < score.length; index++ ) {
			if( score[index] > max ) {
				max = score[index];
			}
		}

		return max;
	}

	public double minimum(double[] score) {
		double min = score[0];
		for( int index = 0; index < score.length; index++ ) {
			if( score[index] < min ) {
				min = score[index];
			}
		}

		return min;
	}
}
