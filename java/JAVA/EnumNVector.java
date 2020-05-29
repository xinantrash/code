import java.util.Enumeration;
import java.util.Vector;

public class EnumNVector {

	public void vector() {
		Enumeration<String> days;
		Vector<String> dayNames = new Vector<String>();

		dayNames.add("Monday");
		dayNames.add("Tuesday");
        dayNames.add("Wednesday");
        dayNames.add("Thursday");
        dayNames.add("Friday");
        dayNames.add("Saturday");
		dayNames.add("Sunday");

		days = dayNames.elements();

		while( days.hasMoreElements() ) {
			System.out.println(days.nextElement());
		}
	}

	public static void main(String[] args) {
		EnumNVector ev = new EnumNVector();

		ev.vector();
	}
}
