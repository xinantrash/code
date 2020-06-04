import java.awt.event.*;
import javax.swing.*;

public class ComputerListener implements ActionListener {
	JTextField inputNumberOne, inputNumberTwo;
	JTextArea textShow;
	String s;
	public void setJTextFieldOne(JTextField t) {
		inputNumberOne = t;
	}

	public void setJTextFieldTwo(JTextField t) {
		inputNumberTwo = t;
	}

	public void setJTextArea(JTextArea area) {
		textShow = area;
	}

	public void setS(String s) {
		this.s = s;
	}

	public void actionPerformed(ActionEvent e) {
		try {
			double number1 = Double.parseDouble(inputNumberOne.getText());
			double number2 = Double.parseDouble(inputNumberTwo.getText());
			double result = 0;
			if( s.equals("+") ) {
				result = number1 + number2;
			}
			else if( s.equals("-") ) {
				result = number1 - number2;
			}
			else if( s.equals("*") ) {
				result = number1 * number2;
			}
			else if( s.equals("/") ) {
				result = number1 / number2;
			}
			textShow.append(number1+" "+s+" "+number2+" = "+result+"\n");
		} catch ( Exception exp ) {
			textShow.append("\n请输入数字字符\n");
		}
	}
}
