import java.io.OutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class FileStreamTest {
	
	public static void main(String[] args) {
		try {
			byte bWrite[] = { 11, 21, 3, 40, 5 };
			OutputStream os = new FileOutputStream("test.java");
			for( int index = 0; index < bWrite.length; index++ ) {
				os.write(bWrite[index]);
			}
			os.close();

			InputStream is = new FileInputStream("test.java");
			int size = is.available();

			for( int index = 0; index < size; index++ ) {
				System.out.print((char) is.read() + " ");
			}
			is.close();
		} catch(IOException e) {
			System.out.println("Exception");
		}
	}
}
