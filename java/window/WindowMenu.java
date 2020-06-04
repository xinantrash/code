import javax.swing.*;
import java.awt.event.InputEvent;
import java.awt.event.KeyEvent;
import javax.swing.JFrame;

public class WindowMenu extends JFrame {
	JMenuBar menuBar;
	JMenu menu, subMenu;
	JMenuItem item1, item2;

	public WindowMenu() {

	}
	
	public WindowMenu(String s, int x, int y, int w, int h) {
		init(s);
		setLocation(x,y);
		setSize(w,h);
		setVisible(true);
		setDefaultCloseOperation(DISPOSE_ON_CLOSE);
	}

	void init(String s) {
		setTitle(s);
		menuBar = new JMenuBar();
		menu = new JMenu("菜单");
		subMenu = new JMenu("软件项目");
		item1 = new JMenuItem("Java话题", new ImageIcon("a.gif"));
		item2 = new JMenuItem("动画话题", new ImageIcon("b.gif"));
		item1.setAccelerator(KeyStroke.getKeyStroke('A'));
		item2.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_S, InputEvent.CTRL_MASK));
		menu.add(item1);
		menu.addSeparator();
		menu.add(item2);
		menu.add(subMenu);
		subMenu.add(new JMenuItem("汽车销售系统", new ImageIcon("c.gif")));
		subMenu.add(new JMenuItem("农场信息系统", new ImageIcon("d.gif")));
		menuBar.add(menu);
		setJMenuBar(menuBar);
	}

	public static void main(String[] args) {
		WindowMenu windowMenu = new WindowMenu("带菜单的窗口", 20, 30, 200, 190);
	}
}
