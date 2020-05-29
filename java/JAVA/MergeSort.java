import java.util.Arrays;

public class MergeSort {

	public static void merge(int[] arr, int start, int mid, int end, int[] temp) {
		int i = start;
		int j = mid+1;
		int k = 0;

		while( i<=mid && j<=end ) {
			if( arr[i]<=arr[j] ) {
				temp[k++] = arr[i++];
			}
			else {
				temp[k++] = arr[j++];
			}
		}

		while( i<=mid ) {
			temp[k++] = arr[i++];
		}

		while( j<=end ) {
			temp[k++] = arr[j++];
		}

// 		k = 0;
// 		int tempLeft = start;
// 		while( tempLeft<=end ) {
// 			arr[tempLeft++] = temp[k++];
// 		}

		for( j=0, i=start; j<k; j++, i++ ) {
			arr[i] = temp[j];
		}
	}

	public static void mergeSort(int[] arr, int start, int end, int[] temp) {

		if( start<end ) {
			int mid = (start+end)/2;

			mergeSort(arr, start, mid, temp);
			mergeSort(arr, mid+1, end, temp);

			merge(arr, start, mid, end, temp);
		}
	}

	public static void main(String[] args) {
		int[] arr = {7, 2, 5, 6, 3, 1, 8, 4, 10, 9};
		int[] temp = new int[arr.length];

		mergeSort(arr, 0, arr.length-1, temp);

		System.out.println(Arrays.toString(arr));
	}
}
