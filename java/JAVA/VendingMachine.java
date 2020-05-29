import java.util.Scanner;

public class VendingMachine{
	int total   = 0;
	int balance = 0;

	VendingMachine(int balance)
	{
		this.balance = balance;
	}

	void showPrompt()
	{
		System.out.println("Welcome!");
	}

	void showTotal()
	{
		System.out.println("Made a total of "+total+"$");
	}

	void showBalance()
	{
		System.out.println("Your balance="+balance+"$");
	}
	
	void showEnter()
	{
		System.out.println();
	}

	void showDrink()
	{
		System.out.println("1.Cola       --10$");
        System.out.println("2.Bear       --15$");
        System.out.println("3.Coffee     --20$");
        System.out.println("4.Milk       --10$");
        System.out.println("5.Coco       --20$");
        System.out.println("6.Sprite     --10$");
        System.out.println("7.Pepsi      --10$");
		System.out.println("8.Pure-water --05$");
		System.out.println("Press the button to select the drink.");
	}

	void buyDrink()
	{
		Scanner in = new Scanner(System.in);
		int option = 0;
		System.out.print("Button:");
		option = in.nextInt();
		String cola = new String("This is your cola, thank you!");
		String bear = new String("This is your bear, thank you!");
        String coffee = new String("This is your coffee, thank you!");
        String milk = new String("This is your milk, thank you!");
        String coco = new String("This is your coco, thank you!");
        String sprite = new String("This your sprite, thank you!");
        String pepsi = new String("This is your pepsi, thank you!");
		String pure_water = new String("This is your pure-water, thank you!");
		if( option == 1 )
		{
			System.out.println(cola);
			balance -= 10;
			total   += 10;
		}
		else if( option == 2 )
		{
			System.out.println(bear);
			balance -= 15;
			total   += 15;
		}
		else if( option == 3 )
		{
			System.out.println(coffee);
			balance -= 20;
			total   += 20;
		}
		else if( option == 4 )
		{
			System.out.println(milk);
			balance -= 10;
			total   += 10;
		}
		else if( option == 5 )
		{
			System.out.println(coco);
			balance -= 20;
			total   += 20;
		}
		else if( option == 6 )
		{
			System.out.println(sprite);
			balance -= 10;
			total   += 10;
		}
		else if( option == 7 )
		{
			System.out.println(pepsi);
			balance -= 10;
			total   += 10;
		}
		else if( option == 8 )
		{
			System.out.println(pure_water);
			balance -= 5;
			total   += 5;
		}
		in.close();
	}

	void showBoundary()
	{
		System.out.println("################################################");
	}

	public static void main(String[] args)
	{
		VendingMachine vendingMachine = new VendingMachine(100);
		vendingMachine.showPrompt();
		vendingMachine.showBoundary();
		vendingMachine.showBalance();
		vendingMachine.showEnter();
		vendingMachine.showDrink();
		vendingMachine.showBoundary();
		vendingMachine.buyDrink();
		vendingMachine.showBoundary();
		vendingMachine.showBalance();
		vendingMachine.showTotal();
		vendingMachine.showBoundary();
	}
}
