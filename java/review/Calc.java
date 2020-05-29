class Circle{

	public double calcperimeter(int r){
		double  perimeter = 0.0;
		perimeter = 3.14*2*r;

		return perimeter;
	}

	public double calcArea(int r){
		double area = 0.0;
		area = 3.14*r*r;

		return area;
	}
}

public class Calc{
	public static void main(String[] args){
		Circle c = new Circle();	
		System.out.println(c.calcArea(10));
		System.out.println(c.calcArea(5));
	}
}
