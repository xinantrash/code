import java.lang.Math;

public class PrimeNumber{

	public boolean Prime(int number){
		
		boolean isPrime = true;
		int num = (int)Math.sqrt((double)number);
		for( int j=2; j<=num; j++){
			if( number%j==0 ){
				isPrime = false;
				break;
			}
		}

		return isPrime;
	}

	public static void main(String[] args){
		PrimeNumber prime = new PrimeNumber();
		for( int i=2; i<=100; i++ ){
			if( prime.Prime(i) ){
				System.out.print(i+" ");
			}
		}
	}
}
