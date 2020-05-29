interface WaterState {
	public abstract void waterState();
}

class SoildState implements WaterState {
	public void waterState() {
		System.out.println("The water is soild state");
	}
}

class LiquidState implements WaterState {
	public void waterState() {
		System.out.println("The water is liquid state");
	}
}

class Water {
	WaterState waterState;

	public void setWaterState(WaterState waterState) {
		this.waterState = waterState;
	}

	public void show() {
		waterState.waterState();
	}
}

public class WaterStateDemo {
	
	public static void main(String[] args) {
		Water water            = new Water();
		WaterState soildState  = new SoildState();
		WaterState liquidState = new LiquidState();
		water.setWaterState(soildState);
		System.out.println("When water temperature is below zero:");
		water.show();
		water.setWaterState(liquidState);
		System.out.println("When water temperature is above zero:");
		water.show();
	}
}
