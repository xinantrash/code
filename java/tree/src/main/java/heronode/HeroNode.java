package heronode;

public class HeroNode{
		private int number;
		private String name;
		private HeroNode left;
		private HeroNode right;

		public HeroNode(int number, String name){
			this.number = number;
			this.name   = name;
		}

		public int getNumber(){
			return number;
		}

		public void setNumber(int number){
			this.number = number;
		}

		public String getName(String name){
			return name;
		}

		public void setName(String name){
			this.name = name;
		}

		public HeroNode getLeft(HeroNode left){
			return left;
		}

		public void setLeft(HeroNode left){
			this.left = left;
		}

		public HeroNode getRight(HeroNode right){
			return right;
		}

		public void setRight(HeroNode right){
			this.right = right;
		}

		@Override
		public String toString(){
			return "[ number=" + number +","+"name=" + name + " ]";
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

		public void preOrder(){
			System.out.println(this);

			if( this.left != null ){
				this.left.preOrder();
			}

			if( this.right !=null ){
				this.right.preOrder();
			}
		}

		public void infixOrder(){
			if( this.left != null ){
				this.left.infixOrder();
			}
			
			System.out.println(this);

			if( this.right != null ){
				this.right.infixOrder();
			}
		}

		public void postOrder(){
			if( this.left != null ){
				this.left.postOrder();
			}

			if( this.right != null ){
				this.right.postOrder();
			}

			System.out.println(this);
		}
}
