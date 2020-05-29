package arrBinaryTree;

import arrBinaryTree.ArrBinaryTree;

public class ArrBinaryTreeDemo {

	public static void main(String[] args) {
		int[] arr = {1, 2, 3, 4, 5, 6, 7};
		ArrBinaryTree arrBinaryTree = new ArrBinaryTree(arr);
		arrBinaryTree.preOrder();
		System.out.println();
		arrBinaryTree.midOrder();
		System.out.println();
		arrBinaryTree.lastOrder();
	}
}
