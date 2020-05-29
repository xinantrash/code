import java.util.HashMap;
import java.util.Scanner;

public class Coins{

	private HashMap<Integer,String> coinnames = new HashMap<Integer,String>();

	public Coins(){
		coinnames.put(1,"penny");
		coinnames.put(10,"dime");
		coinnames.put(25,"quarter");
		coinnames.put(50,"half-dollar");
		System.out.println(coinnames);
	}

	public String getName(int amount){
		if( coinnames.containsKey(amount) ){
			return coinnames.get(amount);
		}
		else{
			return "NOT FOUND!";
		}
	}
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int amount = in.nextInt();
		Coins coin = new Coins();
		String name = coin.getName(amount);
		System.out.println(name);
		in.close();
	}
}
