package linkedlistdemo;

import linkedlist.LinkedList;
import heronode.HeroNode;

public class LinkedListDemo{

	public static void main(String[] args){

		HeroNode heroNode_1 = new HeroNode(1, "a", "A");	
		HeroNode heroNode_2 = new HeroNode(2, "b", "B");
		HeroNode heroNode_3 = new HeroNode(3, "c", "C");
		HeroNode heroNode_4 = new HeroNode(4, "d", "D");

		LinkedList singlelinkedlist = new LinkedList();

		singlelinkedlist.add(heroNode_1);
		singlelinkedlist.add(heroNode_3);
		singlelinkedlist.add(heroNode_2);
		singlelinkedlist.add(heroNode_4);

		singlelinkedlist.listList();
		System.out.println();
		singlelinkedlist.delete(heroNode_2);

        // singlelinkedlist.addByOrder(heroNode_1);
        // singlelinkedlist.addByOrder(heroNode_3);
        // singlelinkedlist.addByOrder(heroNode_2);
		// singlelinkedlist.addByOrder(heroNode_4);

		singlelinkedlist.listList();
		System.out.println();
		singlelinkedlist.search(3);
	}
}
