public class HeroNode {
	private int number;
	private String name;
	private HeroNode left;
	private HeroNode right;

	HeroNode(int number, String name) {
		this.number = number;
		this.name   = name;
	}

	public void setNumber(int number) {
		this.number = number;
	}

	public int getNumber() {
		return number;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getName() {
		return name;
	}

	public void setLeft(HeroNode left) {
		this.left = left;
	}

	public HeroNode getLeft() {
		return left;
	}

	public void setRight(HeroNode right) {
		this.right = right;
	}

	public HeroNode getRight() {
		return right;
	}

	@Override
	public String toString() {
		return " [ "+number+" "+name+" ] ";
	}

	public void preOrder() {
		System.out.println(this);

		if( this.left != null ) {
			this.left.preOrder();
		}
		
		if( this.right != null ) {
			this.right.preOrder();
		}
	}

	public void midOrder() {
		if( this.left != null ) {
			this.left.midOrder();
		}

		System.out.println(this);

		if( this.right != null ) {
			this.right.midOrder();
		}
	}

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
