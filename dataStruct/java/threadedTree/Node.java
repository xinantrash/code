package threadedTree;

public class Node {
	private int number;
	private String name;
	private Node left;
	private Node right;
	
	//
	private int leftType;
	private int rightType;

	public Node(int number, String name) {
		this.number = number;
		this.name   = name;
	}

	public void setNumber(int number) {
		this.number = number;
	}

	public int setNumber() {
		return number;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	public String getName() {
		return name;
	}

	public void setLeft(Node left) {
		this.left = left;
	}

	public Node getLeft() {
		return left;
	}

	public void setRight(Node right) {
		this.right = right;
	}

	public Node getRight() {
		return right;
	}

	public void setLeftType(int leftType) {
		this.leftType = leftType;
	}

	public int getLeftType() {
		return leftType;
	}

	public void setRightType(int rightType) {
		this.rightType = rightType;
	}

	public int getRightType() {
		return rightType;
	}
	@Override
	public String toString() {
		return "["+number+", "+name+"]";
	}

	public void delNode(int number) {
		if( this.left != null && this.left.number == number ) {
			this.left = null;
			return;
		}

		if( this.right != null && this.right.number == number ) {
			this.right = null;
			return;
		}

		if( this.left != null ) {
			this.left.delNode(number);
		}

		if( this.right != null ) {
			this.right.delNode(number);
		}
	}

	//前序遍历
	public void preOrder() {
		System.out.println(this);

		if( this.left != null ) {
			this.left.preOrder();
		}
		
		if( this.right != null ) {
			this.right.preOrder();
		}
	}

	//中序遍历
	public void midOrder() {
		if( this.left != null ) {
			this.left.midOrder();
		}

		System.out.println(this);

		if( this.right != null ) {
			this.right.midOrder();
		}
	}

	//后序遍历
	public void postOrder() {
		if( this.left != null ) {
			this.left.postOrder();
		}

		if( this.right != null ) {
			this.right.postOrder();
		}

		System.out.println(this);
	}
}
