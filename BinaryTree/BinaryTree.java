public class BinaryTree {
	private HeroNode root;
	
	public void setRoot(HeroNode root) {
		this.root = root;
	}

	public void preOrder() {
		if( this.root != null ) {
			this.root.preOrder();
		}
		else {
			System.out.println("The tree is empty.");
		}
	}

	public void midOrder() {
		if( this.root != null ) {
			this.root.midOrder();
		}

		else {
			System.out.println("The tree is empty.");
		}
	}

	public void postOrder() {
		if( this.root != null ) {
			this.root.postOrder();
		}

		else {
			System.out.println("The tree is empty.");
		}
	}
}
