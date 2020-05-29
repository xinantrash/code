public class Overloading{
	public int test(){
		System.out.println("test1.");
		return 1;
	}

	public void test(int a){
		System.out.println("test2.");
	}

	public String test(int a, String s){
		System.out.println("test3.");
		return "returntest3";
	}

	public String test(String s, int a){
		System.out.println("test4.");
		return "returntest4";
	}

	public static void main(String[] args){
		Overloading overloading = new Overloading();
		System.out.println(overloading.test());
		overloading.test(1);
		System.out.println(overloading.test(1,"test3"));
		System.out.println(overloading.test("test4",1));
	}
}
