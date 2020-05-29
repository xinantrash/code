package arrBinaryTree;

public class ArrBinaryTree {

	private int[] arr;

	public ArrBinaryTree(int[] arr) {
		this.arr = arr;
	}

	public void preOrder() {
		this.preOrder(0);
	}

	public void midOrder() {
		this.midOrder(0);
	}

	public void lastOrder() {
		this.lastOrder(0);
	}

	private void preOrder(int index) {
		System.out.print(arr[index]+" ");
		
		if( index * 2 + 1 < arr.length ) {
			preOrder(index*2+1);
		}

		if( index * 2 + 2 < arr.length ) {
			preOrder(index*2+2);
		}
	}

	private void midOrder(int index) {
		if( index * 2 + 1 < arr.length ) {
			midOrder(index*2+1);
		}

		System.out.print(arr[index]+" ");

		if( index * 2 + 2 < arr.length ) {
			midOrder(index*2+2);
		}
	}

	private void lastOrder(int index) {
		if( index * 2 + 1 < arr.length ) {
			lastOrder(index*2+1);
		}

		if( index * 2 + 2 < arr.length ) {
			lastOrder(index*2+2);
		}

		System.out.print(arr[index]+" ");
	}
}
