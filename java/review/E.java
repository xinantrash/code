interface Com {
	public void speak();
}

public class E {
	public static void main(String[] args) {
		Com p = new Com() {
			public void speak() {
				System.out.println("p是接口变量");
			}
		};
		p.speak();
	}
}
