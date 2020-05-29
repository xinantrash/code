public class SuperMarket {
	private CheckGoods checkGoods = new CheckGoods();
	private Cashier cashier       = new Cashier();

	public void work() {
		checkGoods.addGoods();
		checkGoods.showGoods();
		cashier.pay(checkGoods.vector);
	}

	public static void main(String[] args) {
		SuperMarket superMarket = new SuperMarket();
		superMarket.work();
	}
}
