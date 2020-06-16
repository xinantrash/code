import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;


public class Conversion {

	public static void main(String[] args) {
		Map<Character, Integer> map = new HashMap<>();
		Scanner in = new Scanner(System.in);
		String s = in.next();
		long ans = 0;

		map.put('A', 10);
		map.put('B', 11);
		map.put('C', 12);
		map.put('D', 13);
		map.put('E', 14);
		map.put('F', 15);

		for( int i=s.length()-1, j=0; i>=0; i--, j++ ) {
			if( map.containsKey(s.charAt(i)) ) {
				ans += map.get(s.charAt(i)) * Math.pow(16, j);
			}
			else {
				ans += (int)(s.charAt(i)) - (int)('0') * Math.pow(16, j);
			}
		}

		System.out.println(ans);
		in.close();
	}
}
