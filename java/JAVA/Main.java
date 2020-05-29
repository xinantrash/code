import java.util.Scanner;

class Fraction{
	int a;
	int b;

	Fraction(int a,int b)
	{
		this.a = a;
		this.b = b;
	}

	void print()
	{
		if( a == b ){
			System.out.println(1);
		}
		else{
			System.out.println(a+"/"+b);
		}
	}

	double toDouble()
	{
		return ((double)a/b);
	}

	Fraction plus(Fraction r)
	{
		int son = a*r.b+r.a*b;
		int mom = b*r.b;
		return new Fraction(son,mom);
	}

	Fraction multiply(Fraction r)
	{
		return new Fraction(a*r.a, b*r.b);
	}

}

public class Main{

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		Fraction a = new Fraction(in.nextInt(),in.nextInt());
		Fraction b = new Fraction(in.nextInt(),in.nextInt());
		a.print();
		b.print();
		a.plus(b).print();
		a.multiply(b).plus(new Fraction(5,6)).print();
		a.print();
		b.print();
		in.close();
	}
}
