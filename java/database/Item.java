public class Item{
	private String title;
	private int playingTime;
	private String comment;
	private boolean gotIt = false;

	public Item(String title, int playingTime, boolean gotIt, String comment){
		this.title       = title;
		this.playingTime = playingTime;
		this.comment     = comment;
		this.gotIt       = gotIt;
	}

	public void print(){
		System.out.print(title);
	}
}
