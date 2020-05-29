public class BufferTest {
	public static void main(String[] args) {
		StringBuffer stringBuffer = new StringBuffer();
		StringBuilder stringBuilder = new StringBuilder();
		stringBuffer.append(1);
		stringBuffer.append(" ");
		stringBuffer.append("人间四月天");

		stringBuilder.append("某科学的超电磁炮T");

		System.out.println(stringBuffer);
		System.out.println(stringBuilder+" "+stringBuilder.length());
	}
}
