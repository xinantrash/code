public class CompleteNumber{

	public static void main(String[] args){

		int ans = 0;

		for( int i=2; i<=1000; i++ ){
			for( int j=1; j<i; j++ ){
				if( i%j==0 ){
					ans += j;
				}
			}
			if( ans==i ){
				System.out.print(ans+" ");
			}
			ans = 0;
		}
	}
}
