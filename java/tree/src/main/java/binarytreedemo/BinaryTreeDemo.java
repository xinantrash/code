package binarytreedemo;

import binarytree.BinaryTree;
import heronode.HeroNode;

public class BinaryTreeDemo{

	public static void main(String[] args){
		BinaryTree binaryTree = new BinaryTree();

		HeroNode root   = new HeroNode(1, "a");
		HeroNode node_1 = new HeroNode(2, "b");
        HeroNode node_2 = new HeroNode(3, "c");
        HeroNode node_3 = new HeroNode(4, "d");
		HeroNode node_4 = new HeroNode(5, "e");

		root.setLeft(node_1);
		root.setRight(node_2);
		node_2.setRight(node_3);
		node_2.setLeft(node_4);
		binaryTree.setRoot(root);

		System.out.println("preOrder");
		binaryTree.preOrder();
		System.out.println();
		
		System.out.println("infixOrder");
		binaryTree.infixOrder();
		System.out.println();

		System.out.println("postOrder");
		binaryTree.postOrder();
	}
}
