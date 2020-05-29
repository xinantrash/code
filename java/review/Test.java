public class Test{
	public static void main(String[] args){
		PC pc       = new PC();
		CPU cpu     = new CPU();
		HardDisk hd = new HardDisk();

		cpu.setSpeed(2200);
		hd.setAmount(200);

		pc.setCPU(cpu);
		pc.setHardDisk(hd);

		pc.show();
	}
}

class PC{
	CPU cpu     = new CPU();
	HardDisk hd = new HardDisk();

	public void setCPU(CPU cpu){
		this.cpu = cpu;
	}

	public void setHardDisk(HardDisk hd){
		this.hd = hd;
	}

	public void show(){
		System.out.println("CPU speed:"+cpu);
		System.out.println("disk amount:"+hd);
	}

}

class CPU{
	private int speed;
	
	public void setSpeed(int speed){
		this.speed = speed;
	}

	public int getSpeed(){
		return speed;
	}

	@Override
	public String toString(){
		return ""+speed;
	}
}

class HardDisk{
	private int amount;

	public void setAmount(int amount){
		this.amount = amount;
	}

	public int getAmount(){
		return amount;
	}

	@Override
	public String toString(){
		return ""+amount;
	}
}
