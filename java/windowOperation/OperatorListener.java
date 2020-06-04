import java.awt.event.*;
import javax.swing.*;

public class OperatorListener implements ItemListener {
	JComboBox choice;
	ComputerListener workTogether;

	public void setJComboBox(JComboBox jComboBox) {
		choice = jComboBox;
	}

	public void setWorkTogether(ComputerListener computerListener) {
		workTogether = computerListener;
	}

	public void itemStateChanged(ItemEvent e) {
		String s = choice.getSelectedItem().toString();
		workTogether.setS(s);
	}
}
