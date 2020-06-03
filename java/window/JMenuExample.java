import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;
import java.awt.*;

public class JMenuExample extends JFrame {
	private JFrame frame;
	private JMenuBar bar;
	private JPanel panel;
	private JLabel label;

	public JMenuExample() {
		frame = new JFrame();
		bar   = new JMenuBar();
		panel = new JPanel();

		this.setTitle("Window");
		this.setJMenuBar(bar);
		this.setResizable(false);

		JMenu fileMenu     = new JMenu("File");
        JMenu editMenu     = new JMenu("Edit");
        JMenu sourceMenu   = new JMenu("Source");
        JMenu refactorMenu = new JMenu("Refactor");
        JMenu navigateMenu = new JMenu("Navigate");
		JMenu searchMenu   = new JMenu("Search");

		bar.add(fileMenu);
		bar.add(editMenu);
        bar.add(sourceMenu);
        bar.add(refactorMenu);
        bar.add(navigateMenu);
        bar.add(searchMenu);

        JMenuItem oItem = new JMenuItem("Open");
        JMenuItem sItem = new JMenuItem("Save");
        JMenuItem eItem = new JMenuItem("exit");

		fileMenu.add(oItem);
		fileMenu.addSeparator();
		fileMenu.add(sItem);
		fileMenu.addSeparator();
		fileMenu.add(eItem);

		JMenuItem cItem = new JMenuItem("Copy");
		JMenuItem pItem = new JMenuItem("Paste");
		JMenuItem uItem = new JMenuItem("Cut");

		editMenu.add(cItem);
		editMenu.addSeparator();
		editMenu.add(pItem);
		editMenu.addSeparator();
		editMenu.add(uItem);

// 		this.add(panel);
		this.setBounds(180, 10, 1024, 680);
		this.setVisible(true);
		this.add(label);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

	public static void main(String[] args) {
		new JMenuExample();
	}
}
