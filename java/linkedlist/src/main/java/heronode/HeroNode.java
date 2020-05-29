package heronode;

public class HeroNode{
	public int number;
	public String heroname;
	public String nickname;
	public HeroNode next;

	public HeroNode(int number, String heroname, String nickname){
		this.number   = number;
		this.heroname = heroname;
		this.nickname = nickname;
	}

	@Override
	public String toString(){
		return "[ number=" + number+","+" name="+ heroname+","+ "nickname="+ nickname+" ]";
	}
}
