public class ManmalInt implements Animal {

	public void eat() {
		System.out.println("ManmalInt eats");
	}

	public void travel() {
		System.out.println("ManmalInt travels");
	}

	public int noOfLegs() {
		return 0;
	}

	public static void main(String[] args) {
		ManmalInt manmalInt = new ManmalInt();
		manmalInt.eat();
		manmalInt.travel();
		System.out.println(manmalInt.noOfLegs());
	}
}
