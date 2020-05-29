import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class FileTest {

	public void writeFile() throws IOException{
		
		File file = new File("a.txt");
		FileOutputStream fop = new FileOutputStream(file);
		OutputStreamWriter writer = new OutputStreamWriter(fop, "UTF-8");
		writer.append("xinantrashboi");
		writer.append("\r\n");
		writer.append("闭庆霖");
		writer.append("\r\n");
		writer.append("secret");
		writer.close();
		fop.close();

		FileInputStream fip = new FileInputStream(file);
		InputStreamReader reader = new InputStreamReader(fip, "UTF-8");
		StringBuffer sb = new StringBuffer();
		while( reader.ready() ) {
			sb.append((char)reader.read());
		}

		System.out.println(sb.toString());

		reader.close();
		fip.close();
	}

	public static void main(String[] args){
		FileTest ft = new FileTest();	
		try {
			ft.writeFile();
		} catch(IOException e) {
			System.out.println("fail!");
		}
	}
}
