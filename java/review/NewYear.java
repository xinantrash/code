class MobileShop {
	InnerPurchaseMoney innerPurchaseMoney1;
	InnerPurchaseMoney innerPurchaseMoney2;

	private int mobileAmount;
	MobileShop() {
		innerPurchaseMoney1 = new InnerPurchaseMoney(20000);
		innerPurchaseMoney2 = new InnerPurchaseMoney(10000);
	}

	void setMobileAmount(int m) {
		mobileAmount = m;
	}
	
	int getMobileAmount() {
		return mobileAmount;
	}

	class InnerPurchaseMoney {
		int moneyValue;
		InnerPurchaseMoney(int m) {
			moneyValue = m;
		}

		void buyMobile() {
			if( moneyValue >= 20000 ) {
				mobileAmount = mobileAmount - 6;
				System.out.println("用价值"+moneyValue+"的内部购物券买了6部手机");
			}

			else if( mobileAmount < 20000 && mobileAmount >= 10000 ) {
				mobileAmount = mobileAmount - 3;
				System.out.println("用价值"+moneyValue+"的内部购物券买了3部手机");
			}
		}
	}
}

public class NewYear {
	public static void main(String[] args) {
		MobileShop shop = new MobileShop();
		shop.setMobileAmount(30);
		System.out.println("手机专卖店目前有"+shop.getMobileAmount()+"部手机");
		shop.innerPurchaseMoney1.buyMobile();
		shop.innerPurchaseMoney2.buyMobile();
		System.out.println("手机专卖店目前有"+shop.getMobileAmount()+"部手机");
	}
}
