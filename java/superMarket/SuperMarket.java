import java.util.Scanner;

public class SuperMarket {

	private Login login           = new Login();
	private Cashier cashier       = new Cashier();
	private CheckGoods checkGoods = new CheckGoods();
	private static String checkCmd = "check";
	private static String insertGoodsCmd = "insert";
	private static String deleteGoodsCmd = "delete";
	private static String buyCmd = "buy";
	private static String exitCmd = "exit";

	public void work() {
		Scanner in = new Scanner(System.in);
// 		login.work();
		if( true ) {
			while( true ) {
				String cmd = in.next();
				if( cmd.equals(exitCmd) ) {
					return;
				}
				else if( cmd.equals(checkCmd) ) {
					checkGoods.checkGoods();
				}
				else if( cmd.equals(insertGoodsCmd) ) {
					checkGoods.insertGoods();
				}
				else if( cmd.equals(deleteGoodsCmd) ) {
					checkGoods.deleteGoods();
				}
				else if( cmd.equals(buyCmd) ) {
					cashier.receiveMoney();
					cashier.change();
					cashier.print();
				}
			}
		}
	}
	public static void main(String[] args) {
		SuperMarket superMarket = new SuperMarket();
		superMarket.work();
	}
}
