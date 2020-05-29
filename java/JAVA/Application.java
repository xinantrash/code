public class Application {
	public static void main(String[] args) {
		Simulator simulator = new Simulator();
		simulator.playSound(new Dog());
		simulator.playSound(new Cat());
	}
}

abstract class Animal {
	abstract void cry();
	abstract String getAnimalName();
}

class Simulator {
	public void playSound(Animal animal) {
		animal.cry();
	}
}

class Dog extends Animal {
	private String animalName = "Dog";
	public void cry() {
		System.out.println("Now is playing "+getAnimalName()+" is sound:Wang......Wang");
	}

	public String getAnimalName() {
		return animalName;
	}
}

class Cat extends Animal {
	private String animalName = "Cat";
	public void cry() {
		System.out.println("Now is playing "+getAnimalName()+" is sound:Miao....Miao");
	}

	public String getAnimalName() {
		return animalName;
	}
}
