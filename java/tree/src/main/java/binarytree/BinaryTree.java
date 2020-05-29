package binarytree;

import heronode.HeroNode;;

public class BinaryTree{
	private HeroNode root;
	
	public void setRoot(HeroNode root){
		this.root = root;
	}

	public void delNode(int number) {
		if( root != null ) {
			if( root.getNumber() == number ) {
				root = null;
			}
			else {
				root.delNode(number);
			}
		}
		else {
			System.out.println("The tree is empty.");
		}
	}

	public void preOrder(){
		if( this.root != null ){
			this.root.preOrder();
		}
		else{
			System.out.println("The binarytree is empty, can't list.");
		}
	}

	public void infixOrder(){
		if( this.root != null ){
			this.root.infixOrder();
		}
		else{
			System.out.println("The binarytree is empty, can't list.");
		}
	}

	public void postOrder(){
		if( this.root != null ){
			this.root.postOrder();
		}
		else{
			System.out.println("The binarytree is empty, can't list.");
		}
	}
}
