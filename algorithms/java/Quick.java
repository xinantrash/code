public class Quick {
	public static void sort(Integer[] arr) {
		sort(arr, 0, arr.length-1);
		show(arr);
	}

	private static void sort(Integer[] arr, int left, int right) {
		if ( right <= left ) {
			return;
		}
		int j = partition(arr, left, right);
		sort(arr, left, j-1);
		sort(arr, j+1, right);
	}

	private static int partition(Integer[] arr, int left, int right) {
		int l = left;
		int r = right+1;
		Integer v = arr[left];

		while ( true ) {
			while ( less(arr[++l], v) ) {
				if( l == right ) {
					break;
				}
			}

			while ( less(v, arr[--r]) ) {
				if( r == left ) {
					break;
				}
			}
			
			if ( l >= r ) {
				break;
			}

			exch(arr, l, r);
		}

		exch(arr, left, r);
		return r;
	}

	private static boolean less(Integer v, Integer w) {
		return v.compareTo(w) < 0;
	}

	private static void exch(Integer[] arr, int i, int j) {
		Integer t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}

	private static void show(Integer[] arr) {
		for( int i=0; i<arr.length; i++ ) {
			System.out.print(arr[i]+" ");
		}
	}

	public static void main(String[] args) {
		Integer[] arr = {2, 1, 3, 7, 6, 5, 8, 4, 9};
		sort(arr);
	}

}
