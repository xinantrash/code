public class Level{

	public static void main(String[] args){

		int sum = 0;
		int mul = 1;
		for( int i=1; i<=10; i++ ){
			for( int j=1; j<=i; j++ ){
				mul *= j;
			}
			sum += mul;
			mul = 1;
		}
		System.out.println("sum="+sum);
	}
}
