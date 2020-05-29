package threadedTree;

import threadedTree.Node;
import threadedTree.ThreadedTree;

public class ThreadedTreeDemo {

	public static void main(String[] args) {
		Node root  = new Node(1, "tom");
        Node node2 = new Node(3, "jack");
        Node node3 = new Node(6, "smith");
        Node node4 = new Node(8, "mary");
        Node node5 = new Node(10, "king");
		Node node6 = new Node(14, "dim");

		root.setLeft(node2);
		root.setRight(node3);
		node2.setLeft(node4);
		node2.setRight(node5);
		node3.setLeft(node6);

		ThreadedTree threadedTree = new ThreadedTree();
		threadedTree.setRoot(root);
		threadedTree.threadedNodes();

// 		Node leftNode = node5.getLeft();
// 		Node rightNode = node5.getRight();
// 		System.out.println(leftNode);
// 		System.out.println(rightNode);

		threadedTree.threadedList();
	}
}
