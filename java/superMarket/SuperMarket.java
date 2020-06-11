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

	public void tip() {
		System.out.println("================================================");
		System.out.println("welcome!");
		System.out.println("plz input the command like check...etc");
		System.out.println("1.check:查看商品");
		System.out.println("2.insert:插入商品");
		System.out.println("3.delete:删除商品");
		System.out.println("4.buy:购买商品");
		System.out.println("5.exit:退出程序");
		System.out.println("================================================");
	}

	public void work() {
		Scanner in = new Scanner(System.in);
		if( login.loginFail() != false ) {
			while( true ) {
				this.tip();
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
		else {
			System.out.println("密码错误三次, 自动退出程序");
		}
	}
	public static void main(String[] args) {
		SuperMarket superMarket = new SuperMarket();
		superMarket.work();
	}
}
