package linkedlist;

import heronode.HeroNode;

public class LinkedList{
	private HeroNode head = new HeroNode(0, "", "");

	public void add(HeroNode heroNode){
		//Temporal variable for finding the last node.
		HeroNode temp = head; 
		//To find the last node.
		while( temp.next != null ){
			temp = temp.next;
		}
		temp.next = heroNode;
	}

	public void addByOrder(HeroNode heroNode){
		HeroNode temp = head;
		boolean flag = false;
		//To find the insertion position.
		while( true ){
			if( temp.next == null ){
				break;
			}

			if( temp.next.number > heroNode.number ){
				break;
			}
			else if( temp.next.number == heroNode.number ){
				flag = true;
				break;
			}
			temp = temp.next;
		}
		//Determine whether to insert variables
		if( flag ){
			System.out.println("The No."+heroNode.number+" is already exist.");
		}
		else{
			heroNode.next = temp.next;
			temp.next     = heroNode;
		}
	}

	public void delete(HeroNode heroNode){
		HeroNode temp = head;
		while( true ){
			if( heroNode.number == temp.next.number ){
				temp.next = temp.next.next;
				break;
			}
			if( temp.next == null ){
				System.out.println("the node is nonexistent.");
				break;
			}
			temp = temp.next;
		}
	}

	public void search(int number){
		HeroNode temp = head;
		while( true ){
			if( temp.next.number == number ){
				System.out.println(temp.next);
				break;
			}
			if( temp.next == null ){
				System.out.println("The node is nonexistent.");
				break;
			}
			temp = temp.next;
		}
	}

	public void listList(){
		//Determine if the linked list is empty
		if( head.next == null ){
			System.out.println("Linkedlist is empty.");
			return;
		}
		HeroNode temp = head.next;
		while( temp != null ){
			System.out.println(temp);
			temp = temp.next;
		}
	}
}
