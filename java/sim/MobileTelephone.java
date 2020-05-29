public class MobileTelephone {

	private SIM card;
	
	public void useSIM(SIM card) {
		this.card = card;
	}

	public void showMsg() {
		System.out.println("Card id is from "+card.getCorpName());
		System.out.println("Phone number is "+card.getNumber());
	}
}
