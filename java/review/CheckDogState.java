interface DogState {
	public void showState();
}

class SoftlyState implements DogState {
	public void showState() {
		System.out.println("听主人的命令");
	}
}

class MeetEnemyState implements DogState {
	public void showState() {
		System.out.println("狂叫，并冲上去狠咬敌人");
	}
}

class MeetFriendState implements DogState {
	public void showState() {
		System.out.println("晃动尾巴，表示欢迎");
	}
}

class MeetAnotherDog implements DogState {
	public void showState() {
		System.out.println("嬉戏");
	}
}

class Dog {
	DogState dogState;

	public void setState(DogState dogState) {
		this.dogState = dogState;
	}

	public void show() {
		dogState.showState();
	}
}

public class CheckDogState {
	public static void main(String[] args) {
		Dog dog = new Dog();
		System.out.print("狗在主人面前:");
		dog.setState(new SoftlyState());
		dog.show();
		System.out.print("狗遇到敌人:");
		dog.setState(new MeetEnemyState());
		dog.show();
		System.out.print("狗遇到朋友:");
		dog.setState(new MeetFriendState());
		dog.show();
		System.out.print("狗遇到同伴:");
		dog.setState(new MeetAnotherDog());
		dog.show();
	}
}
