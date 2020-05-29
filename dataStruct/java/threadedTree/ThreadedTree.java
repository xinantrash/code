package threadedTree;

public class ThreadedTree {

	private Node root;
	private Node pre = null;

	public void setRoot(Node root) {
		this.root = root;
	}

	public void threadedNodes() {
		this.threadedNodes(root);
	}

	private void threadedNodes(Node node) {

		if( node == null ) {
			return;
		}

		threadedNodes(node.getLeft());

		if( node.getLeft() == null ) {
			node.setLeft(pre);
			node.setLeftType(1);
		}

		if( pre != null && pre.getRight() == null ) {
			pre.setRight(node);
			pre.setRightType(1);
		}
		
		//important!!!
		pre = node;
		
		threadedNodes(node.getRight());
	}

	public void threadedList() {
		Node node = root;
		
		while( node != null ) {
			while( node.getLeftType() == 0 ) {
				node = node.getLeft();
			}

			System.out.println(node);

			while( node.getRightType() == 1 ) {
				node = node.getRight();
				System.out.println(node);
			}

			node = node.getRight();
		}
	}
	
	public void preOrder() {
		if( root != null ) {
			root.preOrder();
		}
		else {
			System.out.println("The tree is empty.");
		}
	}

	public void midOrder() {
		if( root != null ) {
			root.midOrder();
		}
		else {
			System.out.println("The tree is empty.");
		}
	}

	public void postOrder() {
		if( root != null ) {
			root.postOrder();
		}
		else {
			System.out.println("The tree is empty.");
		}
	}
}
