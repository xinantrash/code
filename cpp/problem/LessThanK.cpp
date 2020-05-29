// #include <bits/stdc++.h>
// 
// using namespace std;
// 
// void quickSort(int arr[], int left, int right);
// 
// int main(int argc, const char *argv[]) {
// 	int n;
// 	int k;
// 	int arr[5000000];
// 
// 	cin >> n >> k;
// 
// 	for( int i=0; i<n; ++i ) {
// 		cin >> arr[i];
// 	}
// 
// 	quickSort(arr, 0, n-1);
// 
// 	cout << arr[k];
// 
// 	return 0;
// }
// 
// void quickSort(int arr[], int left, int right) {
// 	int l = left;
// 	int r = right;
// 	int mid = arr[left];
// 
// 	while( l <= r ) {
// 		while( arr[r] > mid ) {
// 			r--;
// 		}
// 
// 		while( arr[l] < mid ) {
// 			l++;
// 		}
// 
// 		if( l <= r ) {
// 			swap(arr[l], arr[r]);
// 			r--;
// 			l++;
// 		}
// 		if( left < r ) {
// 			quickSort(arr, left, r);
// 		}
// 		if( l < right ) {
// 			quickSort(arr, l, right);
// 		}
// 	}
// }

#include <bits/stdc++.h>

using namespace std;

long long arr[5000000];
long long k;
long long n;

int main(int argc, const char *argv[]) {
	cin >> n >> k;

	for( int i=0; i<n; i++ ) {
		cin >> arr[i];
	}

	nth_element(arr, arr+k, arr+n);

	cout << arr[k];

	return 0;
}
