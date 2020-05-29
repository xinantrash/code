import java.util.ArrayList;

public class Generic {
	private ArrayList<Integer> arrayList = new ArrayList<>();

	public void list() {

		arrayList.add(5);
		arrayList.add(6);
	}

	public void show() {
		System.out.println(arrayList);
	}

	public static void main(String[] args) {
		Generic generic = new Generic();
		generic.list();
		generic.show();
	}
}
