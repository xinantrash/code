import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class DateDemo {

	public static void main(String[] args) {
		Date date = new Date();
		SimpleDateFormat st = new SimpleDateFormat("yyyy-MM-dd");

		String input = args.length == 0 ? "1818-11-11" : args[0];

		Date t;

		try {
			t = st.parse(input);
			System.out.println(t);
		} catch(ParseException e) {
			System.out.println("Unparseable using" + st);
		}
	}
}
