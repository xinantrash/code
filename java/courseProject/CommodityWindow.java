import java.awt.*;
import javax.swing.*;

public class CommodityWindow {

	private JTextArea commodityArea;
	private JTextField commodityField;
	private JTextField commodityNums;
	private JButton commodityButton;
	private JButton exitButton;
	private JLabel commodityLabel;
	private JLabel commodityFieldLabel;
	private JLabel commodityNumsLabel;
	private Font font;
	private JScrollPane jScrollPane;
	private CommodityWindowListener listener;
	private WindowExitListener exitListener = new WindowExitListener();
	
	private void init(JPanel panel) {
		panel.setLayout(null);
		listener = new CommodityWindowListener();

		commodityLabel = new JLabel("商品列表");
		font = new Font("微软雅黑", Font.BOLD, 20);
		commodityLabel.setFont(font);
		commodityLabel.setBounds(60, 50, 85, 20);
		panel.add(commodityLabel);

		listener.print();
		commodityArea = listener.getCommodityArea();
		font = new Font("微软雅黑", Font.BOLD, 16);
		commodityArea.setFont(font);
		commodityArea.setBounds(60, 80, 200, 300);
		commodityArea.setEditable(false);
		jScrollPane = new JScrollPane(commodityArea);
		jScrollPane.setBounds(60, 80, 200, 100);
// 		panel.add(commodityArea);
		panel.add(jScrollPane);

		commodityFieldLabel = new JLabel("请输入商品代码,如\"1001\"");
		commodityFieldLabel.setBounds(380, 60, 160, 80);
		panel.add(commodityFieldLabel);

		commodityField = new JTextField(20);
		commodityField.setBounds(380, 110, 135, 25);
		panel.add(commodityField);
		listener.setCommodityField(commodityField);

		commodityNumsLabel = new JLabel("请输入需要购买的数量");
		commodityNumsLabel.setBounds(380, 140, 135, 80);
		panel.add(commodityNumsLabel);

		commodityNums = new JTextField(20);
		commodityNums.setBounds(380, 190, 135, 25);
		panel.add(commodityNums);
		listener.setCommodityNums(commodityNums);

		commodityButton = new JButton("ok!");
		commodityButton.setBounds(210, 450, 80, 25);
		panel.add(commodityButton);

		exitButton = new JButton("exit!");
		exitButton.setBounds(330, 450, 80, 25);
		panel.add(exitButton);

		commodityButton.addActionListener(listener);	
		exitButton.addActionListener(exitListener);
	}

	public void work() {
		JFrame jFrame = new JFrame("Commodity");
		jFrame.setSize(600, 500);
		jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JPanel jPanel = new JPanel();
		jFrame.add(jPanel);
		init(jPanel);
		jFrame.setVisible(true);
		exitListener.setJFrame(jFrame);
	}
	public static void main(String[] args) {
		CommodityWindow test = new CommodityWindow();
		test.work();
	}
}
