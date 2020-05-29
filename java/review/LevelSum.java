public class LevelSum{

	public static void main(String[] args){

		double sum = 0;
		double mul = 1;
		for( int i=1; i<=20; i++ ){
			for( double j=1; j<=i; j++ ){
				mul *= j;
			}
			sum += 1.0/mul;
			mul = 1;
		}
		System.out.println("sum="+sum);
	}
}
