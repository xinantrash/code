public class Goods {
	private String name;
	private String code;
	private int price;
	private int number;

	public Goods(String name, int price, int number, String code) {
		this.name   = name;
		this.price  = price;
		this.number = number;
		this.code   = code;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getName() {
		return name;
	}

	public void setCode(String code) {
		this.code = code;
	}

	public String getCode() {
		return code;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public int getPrice() {
		return price;
	}

	public void setNumber(int number) {
		this.number = number;
	}

	public int getNumber() {
		return number;
	}

	public void decrease() {
		this.number--;
	}

	@Override
	public String toString() {
		return "["+name+", "+price+", "+number+", "+code+"]";
	}

}
