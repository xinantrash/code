import java.util.Scanner;
import java.util.Vector;

public class CheckGoods {
	Vector<Goods> vector = new Vector<>();

	public void addGoods() {
		Scanner in  = new Scanner(System.in);
		String name = in.next();
		int price   = in.nextInt();
		int number  = in.nextInt();
		String code = in.next();
		Goods goods = new Goods(name, price, number, code);
		vector.add(goods);
	}

	public void showGoods() {
		if( vector.isEmpty() ) {
			System.out.println("There is no goods!");
		}
		else {
			System.out.println(vector.toString());
		}
	}

}
