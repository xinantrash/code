import java.text.SimpleDateFormat;
import java.util.Date;

public class Print {
	public static void dateFormat() {
		Date date = new Date();
		SimpleDateFormat st = new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");
		System.out.println(st.format(date));
	}
}
