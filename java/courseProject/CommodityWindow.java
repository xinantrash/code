import java.awt.*;
import javax.swing.*;

public class CommodityWindow {

	private JTextArea commodityArea;
	private JButton commodityButton;
	private JList commodityList;
	private JLabel commodityLabel;
	private Font font;
	
	private void init(JPanel panel) {
		panel.setLayout(null);

		commodityLabel = new JLabel("商品列表");
		font = new Font("微软雅黑", Font.BOLD, 20);
		commodityLabel.setFont(font);
		commodityLabel.setBounds(20, 50, 85, 20);
		panel.add(commodityLabel);

		commodityButton = new JButton("ok!");
		commodityButton.setBounds(125, 140, 80, 25);
		panel.add(commodityButton);
	}

	public void work() {
		JFrame jFrame = new JFrame("Register");
		jFrame.setSize(600, 600);
		jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JPanel jPanel = new JPanel();
		jFrame.add(jPanel);
		init(jPanel);
		jFrame.setVisible(true);
	}
	public static void main(String[] args) {
		CommodityWindow test = new CommodityWindow();
		test.work();
	}
}
