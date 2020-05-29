public class Largest{

	public static void main(String[] args){

		int flag = 0;
		int sum  = 0;
		for( int cnt=1; sum<8888; cnt++ ){

			sum += cnt;
			flag = cnt;
		}
		System.out.println(flag);
	}
}
