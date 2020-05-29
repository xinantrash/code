public class VideoGame extends Item{

	private int numberOfPlayer;
	
	public VideoGame(String title, int playingTime, boolean gotIt, String comment, int number){
		super(title, playingTime, gotIt, comment);
		numberOfPlayer = number;
	}

	@Override
	public void print(){
		System.out.print("VideoGame:");
		super.print();
		System.out.println(":"+numberOfPlayer);
	}
}
