public class SuperMarket {

	public static void main(String[] args) {
		CheckGoods checkGoods = new CheckGoods();
		Cashier cashier = new Cashier();
// 		checkGoods.insertGoods();
// 		checkGoods.checkGoods();
// 		checkGoods.deleteGoods();
		cashier.receiveMoney();
		cashier.change();
		cashier.print();
	}
}
