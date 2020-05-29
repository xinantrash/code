#include<stdio.h>

void printList(int arr[], int len);
void merge(int arr[], int start, int mid, int end);
void mergeSort(int arr[], int start, int end);

int main(int argc, const char *argv[])
{
	int arr[] = {4, 7, 6, 5, 2, 1, 8, 2, 9, 1};
	mergeSort(arr, 0, 9);
	printList(arr, 10);

	return 0;
}

void printList(int arr[], int len)
{
	int i;
	for( i=0; i<len; i++ ) {
		printf("%d ", arr[i]);
	}
}

void merge(int arr[], int start, int mid, int end)
{
	int result[20];
	int k = 0;
	int i = start;
	int j = mid + 1;
	while( i<=mid && j<=end ) {
		if( arr[i]<arr[j] ) {
			result[k++] = arr[i++];
		}
		else {
			result[k++] = arr[j++];
		}
	}
	
	if( i==mid+1 ) {
		while( j<=end ) {
			result[k++] = arr[j++];
		}
	}

	if( j==end+1 ) {
		while( i<=mid ) {
			result[k++] = arr[i++];
		}
	}

	for( j=0, i=start; j<k; i++, j++ ) {
		arr[i] = result[j];
	}
}

void mergeSort(int arr[], int start, int end)
{
	if( start>=end ) {
		return;
	}

	int mid = (start+end)/2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid+1, end);
	merge(arr, start, mid, end);
}
