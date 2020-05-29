#include <stdio.h>

void merge(int arr[], int start, int mid, int end, int temp[]);
void mergeSort(int arr[], int start, int end, int temp[]);

int main(int argc, const char *argv[])
{
	int arr[1000];
	int temp[1000];
	int n;
	int cnt;
	scanf("%d", &n);

	for( int i=0; i<n; i++ ) {
		arr[i]  = 0;
		temp[i] = 0;
	}

	for( int i=0; i<n; i++ ) {
		scanf("%d", &arr[i]);
	}
	
	cnt = n;
	for( int i=0; i<n; i++ ) {
		for( int j=i+1; j<n; j++ ) {
			if( arr[i] == arr[j] ) {
				arr[i]=1001;
				cnt--;
			}
		}
	}

	mergeSort(arr, 0, n-1, temp);

	printf("%d\n", cnt);
	for( int i=0; i<cnt; i++ ) {
		printf("%d ", arr[i]);
	}
}

void merge(int arr[], int start, int mid, int end, int temp[])
{
	int i = start;
	int j = mid + 1;
	int k = 0;

	while( i <= mid && j <= end ) {
		if( arr[i] < arr[j] ) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
		}
	}

	if( i == mid+1 ) {
		while( j <= end ) {
			temp[k++] = arr[j++];
		}
	} 

	if( j == end+1 ) {
		while( i <= mid ) {
			temp[k++] = arr[i++];
		}
	}

	for( j=0, i=start; j<k; i++, j++ ) {
		arr[i] = temp[j];
	}
}

void mergeSort(int arr[], int start, int end, int temp[])
{
	if( start < end ) {
		int mid = (start+end)/2;
		mergeSort(arr, start, mid, temp);
		mergeSort(arr, mid+1, end, temp);
		merge(arr, start, mid, end, temp);
	}
}
