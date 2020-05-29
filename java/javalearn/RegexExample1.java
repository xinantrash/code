import java.util.regex.Pattern;

public class RegexExample1 {

	public static void main(String[] args) {
		String content = new String();
		content = "I am "+"a boy";
		String pattern = ".*boy.*";

		boolean isMatch = Pattern.matches(pattern, content);
		System.out.println(isMatch);
	}
}
