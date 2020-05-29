import java.util.HashMap;
import java.util.Map;

public class MapExample {
	public static void main(String[] args) {
		Map<Integer, String> map         = new HashMap<>();
		HashMap<Integer, String> hashMap = new HashMap<>();

		map.put(0, "A");
		map.put(1, "B");
		map.put(2, "C");
		map.put(3, "D");

		hashMap.putAll(map);

		System.out.println(hashMap);
		
		hashMap.clear();

		System.out.println(hashMap);

		for( int i=0; i<4; ++i ) {
			if( map.containsKey(i) ) {
				System.out.println(map.get(i));
			}
		}

	}
}
