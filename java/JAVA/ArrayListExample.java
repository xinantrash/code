import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListExample {
	public static void main(String[] args) {
		//遍历ArrayList的三种方法

		// 1.
		List<String> list = new ArrayList<String>();
		list.add("hello");
		list.add("world");
		list.add("hhhhh");
		for( String s : list ) {
			System.out.println(s);
		}
		System.out.println();

		// 2.
		String[] s = new String[list.size()];
		list.toArray(s);
		for( int i=0; i<s.length; i++ ) {
			System.out.println(s[i]);
		}
		System.out.println();

		// 3.
		Iterator<String> i = list.iterator();
		while( i.hasNext() ) {
			System.out.println(i.next());
		}
	}
}
