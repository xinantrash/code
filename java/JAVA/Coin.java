import java.util.Stack;

public class Coin {

	public static void backTrack(char[] c, int index, Stack<Character> temp) {
		for ( int i=index; i<c.length; i++ ) {
			temp.push(c[i]);
			System.out.println(temp);
			backTrack(c, i+1, temp);
		}
	}

	public static void main(String[] args) {
		char[] c = {'B', 'T'};
		Stack<Character> temp = new Stack<>();
		backTrack(c, 0, temp);
	}
}
