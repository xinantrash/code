public class LinkedListDemo{

	public static void main(String[] args){
		
		HeroNode heroNode_1 = new HeroNode(1, "a", "A");	
		HeroNode heroNode_2 = new HeroNode(2, "b", "B");
		HeroNode heroNode_3 = new HeroNode(3, "c", "C");
		HeroNode heroNode_4 = new HeroNode(4, "d", "D");

		LinkedList singlelinkedlist = new LinkedList();

		singlelinkedlist.add(heroNode_1);
		singlelinkedlist.add(heroNode_2);
        singlelinkedlist.add(heroNode_3);
		singlelinkedlist.add(heroNode_4);

		singlelinkedlist.listList();
	}
}

class LinkedList{
	private HeroNode head = new HeroNode(0, "", "");

	public void add(HeroNode heroNode){
		HeroNode temp = head;

		while( true ){
			if( temp.next==null ){
				break;
			}

			temp = temp.next;
		}

		temp.next = heroNode;
	}

	public void listList(){
		if( head.next==null ){
			System.out.println("Linkedlist is empty.");
			return;
		}

		HeroNode temp = head.next;

		while( true ){
			if( temp==null ){
				break;
			}

			System.out.println(temp);
			temp = temp.next;
		}
	}
}

class HeroNode{
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
		return "[ number= "+number+","+"heroname= "+heroname+","+"nickname= "+nickname+" ]";
	}
	
}
