import java.awt.event.*;
import javax.swing.*;

public class WindowExitListener implements ActionListener {

	private JFrame frame;

	public void setJFrame(JFrame frame) {
		this.frame = frame;
	}

	public void actionPerformed(ActionEvent event) {
		frame.dispose();
	}
}
