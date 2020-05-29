public class CD extends Item{
//	private String  title;
	private String  artist;
	private int     numofTracks;
//	private int     playingTime;
//	private boolean gotIt = false;
//	private String  comment;

	public CD(String title,String artist,int numofTrack,int playingTime,String comment){
		super(title, playingTime, false, comment);
//		this.title       = title;
        this.artist      = artist;
        this.numofTracks = numofTracks;
//        this.comment     = comment;
//		this.playingTime = playingTime;
	}

	public void print(){
//		System.out.println("CD:"+title+":"+artist);
		System.out.print("CD:");
		super.print();
		System.out.println(":"+artist);
	}
	
	public static void main(String[] args){
		
	}
}
