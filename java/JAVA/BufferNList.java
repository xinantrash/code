import java.util.ArrayList;
import java.util.HashMap;

public class BufferNList {
	
	public void stringBuffer() {
		StringBuffer buffer = new StringBuffer();
		buffer.append("apple ");
		buffer.append("banana ");
		buffer.append("peach ");

		System.out.println(buffer.length());
		System.out.println(buffer.capacity());
		System.out.println(buffer.codePointAt(0));
		System.out.println(buffer.substring(6));
		System.out.println(buffer.substring(0, 6));

		System.out.println(buffer);
	}

	public void arraylist() {
		ArrayList<String> list = new ArrayList<String>();
		list.add(0, "milk");
		list.add(1, "apple");
		list.add(2, "banana");
		list.add(3, "peach");

		System.out.println(list);
	}

	public void hash() {
		HashMap<Integer, String> map = new HashMap<Integer, String>();
		map.put(1, "apple");
		map.put(2, "banana");
		map.put(3, "peach");

		System.out.println(map.isEmpty());
		System.out.println(map.size());
		System.out.println(map.keySet());
		System.out.println(map.remove(1));
		System.out.println(map.remove(2, "banana"));
		System.out.println(map.replace(3, "banana"));
		System.out.println(map.hashCode());
		System.out.println(map.containsKey(2));

		System.out.println(map);
	}

	public static void main(String[] args) {
		BufferNList struct = new BufferNList();

		System.out.println("StringBuffer");
		struct.stringBuffer();
		// System.out.println();
		// System.out.println("ArrayList");
		// struct.arraylist();
		System.out.println();
		System.out.println("HashMap");
		struct.hash();
		// System.out.println();
	}
}
