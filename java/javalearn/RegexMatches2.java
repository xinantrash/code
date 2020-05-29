import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class RegexMatches2 {
	private static final String REGEX  = "foo";
	private static final String INPUT  = "fooooooooooooooooo";
	private static final String INPUT2 = "ooooofoooooooooooo";
	private static Pattern pattern;
	private static Matcher matcher;
	private static Matcher matcher2;

	public static void main(String[] args) {
		pattern  = Pattern.compile(REGEX);
		matcher  = pattern.matcher(INPUT);
		matcher2 = pattern.matcher(INPUT2);

		System.out.println("Current REGEX is: "+REGEX);
		System.out.println("Current INPUT is: "+INPUT);
		System.out.println("Current INPUT2 is: "+INPUT2);

		System.out.println("lookingAt(): "+matcher.lookingAt()); //lookingAt() 方法不需要整句都匹配，但要从第一个字符开始匹配
		System.out.println("matches(): "+matcher.matches()); 	 //matcher() 方法要求整句匹配
		System.out.println("lookingAt(): "+matcher2.lookingAt());
	}
}
