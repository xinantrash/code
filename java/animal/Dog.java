public class Dog extends Animal{

	Dog(){
		super();
	}

	public void move(){
		super.move();
		System.out.println("Dog can run and walk.");
	}

	public void bark(){
		System.out.println("Dog can bark.");
	}

	public static void main(String[] args){
		Dog dog = new Dog();
		dog.move();
		dog.bark();
	}
}
