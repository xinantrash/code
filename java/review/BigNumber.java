public class BigNumber{

	public static void main(String[] args){
		long sum = 0; 
		
		for( long i=1,j=0; i<=10; i++ ){
			j = j*10+8;
			sum += j;	
		}
		System.out.println(sum);
	}
}
