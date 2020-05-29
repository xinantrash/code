public class Example{

	public static void main(String[] args){
		String s = "零一二三四五六七八九";
		for( int i=1; i<=9; i++ ){
			for( int j=1; j<=i; j++ ){
				System.out.print(s.charAt(j)+""+s.charAt(i));
				if( s.charAt(j)=='一' ){
					System.out.print("得"+s.charAt(i)+" ");
				}
				if( s.charAt(j)=='二'&&(s.charAt(i)=='三'||s.charAt(i)=='四') ){
					System.out.print("得"+s.charAt(i)+" ");
				}
			}
			System.out.println();
		}
	}
}
