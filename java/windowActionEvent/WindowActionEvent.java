import javax.swing.*;
import java.awt.*;

public class WindowActionEvent extends JFrame {
	JTextField inputText;
	JTextArea textShow;
	JButton button;
	MyCommandListener listener;
	public WindowActionEvent() {
		init();
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

	void init() {
		setLayout(new FlowLayout());
		inputText = new JTextField(10);
		button = new JButton("确定");
		textShow = new JTextArea(9, 30);
		add(inputText);
		add(button);
		add(new JScrollPane(textShow));
	}

	void setMyCommandListener(MyCommandListener listener) {
		this.listener = listener;
		listener.setJTextField(inputText);
		listener.setJTextArea(textShow);
		inputText.addActionListener(listener);
		button.addActionListener(listener);
	}

	public static void main(String[] args) {
		WindowActionEvent windowActionEvent = new WindowActionEvent();
		PoliceListen policeListen = new PoliceListen();
		windowActionEvent.setMyCommandListener(policeListen);
		windowActionEvent.setBounds(100, 100, 460, 360);
		windowActionEvent.setTitle("处理ActionEvent事件");
	}
}
