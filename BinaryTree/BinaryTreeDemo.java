public class BinaryTreeDemo {
	
	public static void main(String[] args) {
		BinaryTree binaryTree = new BinaryTree();

		HeroNode root  = new HeroNode(1, "aaa");
		HeroNode node2 = new HeroNode(2, "bbb");
		HeroNode node3 = new HeroNode(3, "ccc");
		HeroNode node4 = new HeroNode(4, "ddd");
		HeroNode node5 = new HeroNode(5, "eee");
		
		root.setLeft(node2);
		root.setRight(node3);
		node3.setLeft(node4);
		node3.setRight(node5);
		binaryTree.setRoot(root);
		
		binaryTree.preOrder();
		System.out.println();
		binaryTree.midOrder();
		System.out.println();
		binaryTree.postOrder();
	}
}
