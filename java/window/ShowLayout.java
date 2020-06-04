import java.awt.*;
import javax.swing.*;

public class ShowLayout extends JFrame {
	PanelGridLayout panelGrid;
	PanelNullLayout panelNull;

	JTabbedPane p;
	ShowLayout() {
		panelGrid = new PanelGridLayout();
		panelNull = new PanelNullLayout();

		p = new JTabbedPane();
		p.add("网络布局的面板", panelGrid);
		p.add("空布局的面板", panelNull);
		add(new JButton("窗体是BorderLayout布局"), BorderLayout.NORTH);
		add(new JButton("南"), BorderLayout.SOUTH);
		add(new JButton("西"), BorderLayout.WEST);
		add(new JButton("东"), BorderLayout.EAST);
		setBounds(10, 10, 570, 390);
		setVisible(true);
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		validate();
	}

	public static void main(String[] args) {
		new ShowLayout();
	}
}

class PanelGridLayout extends JPanel {
	PanelGridLayout() {
		GridLayout grid = new GridLayout(12, 12);
		setLayout(grid);
		Label[][] label = new Label[12][12];
		for( int i=0; i<12; i++ ) {
			for( int j=0; j<12; j++ ) {
				label[i][j] = new Label();
				if( (i+j)%2 == 0 ) {
					label[i][j].setBackground(Color.BLACK);
				}
				else {
					label[i][j].setBackground(Color.WHITE);
				}
				add(label[i][j]);
			}
		}
	}
}

class PanelNullLayout extends JPanel {
	JButton button;
	JTextField text;
	PanelNullLayout() {
		setLayout(null);
		button = new JButton("确定");
		text = new JTextField();
		add(text);
		add(button);
		text.setBounds(100, 30, 90, 30);
		button.setBounds(190, 30, 66, 30);
	}
}
