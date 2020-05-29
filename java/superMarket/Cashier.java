import java.util.Scanner;
import java.util.Vector;

public class Cashier {
	private int money = 0;
	private int number;
	private boolean flag = false;
	private int total;

	public int pay(Vector<Goods> vector) {
		int index = 0;
		Scanner in = new Scanner(System.in);
		String code = in.nextLine();

		for( int i=0; i<vector.size(); ++i ) {
			if( vector.get(i).getCode().equals(code) ) {
				flag = true;
				index = i;
				String temp = in.nextLine();
				if( temp.equals("") ) {
					number = 1;
				}
				else {
					number = Integer.parseInt(temp);
				}
				money = number * vector.get(i).getPrice();
				break;
			}
		}
		if( flag == false ) {
			System.out.println("Product does not exist!");
			return 0;
		}
		else {
			int received = in.nextInt();
			System.out.println(vector.get(index).getName()+", "+"number:"+number+", "+"pay:"+money+", "+"received:"+received);
			return money;
		}
	}
}
