import java.awt.*;
import javax.swing.*;
import java.io.*;

public class WindowOperation extends JFrame {
	JTextField inputNumberOne, inputNumberTwo;
	JComboBox choice;
	JTextArea textShow;
	JButton button;
	OperatorListener operator;
	ComputerListener computer;
	public WindowOperation() {
		init();
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

	void init() {
		setLayout(new FlowLayout());
		inputNumberOne = new JTextField(5);
		inputNumberTwo = new JTextField(5);
		choice = new JComboBox();
		button = new JButton("计算");
		choice.addItem("选择运算符号:");
		String[] a = {"+", "-", "*", "/"};
		for( int i=0; i<a.length; ++i ) {
			choice.addItem(a[i]);
		}
		textShow = new JTextArea(9, 30);
		operator = new OperatorListener();
		computer = new ComputerListener();
		operator.setJComboBox(choice);
		operator.setWorkTogether(computer);
		computer.setJTextFieldOne(inputNumberOne);
		computer.setJTextFieldTwo(inputNumberTwo);
		computer.setJTextArea(textShow);
		choice.addItemListener(operator);
		button.addActionListener(computer);
		add(inputNumberOne);
		add(choice);
		add(inputNumberTwo);
		add(button);
		add(new JScrollPane(textShow));
	}

	public static void main(String[] args) {
		WindowOperation windowOperation = new WindowOperation();
		windowOperation.setBounds(100, 100, 390, 360);
		windowOperation.setTitle("简单计算器");
	}
}
