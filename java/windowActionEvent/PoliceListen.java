import javax.swing.*;
import java.awt.event.*;

public class PoliceListen implements MyCommandListener {
	JTextField textInput;
	JTextArea textShow;
	
	public void setJTextField(JTextField text) {
		textInput = text;
	}

	public void setJTextArea(JTextArea area) {
		textShow = area;
	}

	public void actionPerformed(ActionEvent e) {
		String s = textInput.getText();
		textShow.append(s+"的长度:"+s.length()+"\n");
	}
}
