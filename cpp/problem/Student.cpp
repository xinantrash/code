#include <bits/stdc++.h>

using namespace std;

// void quick(int arr[], int left, int right);

int main(int argc, const char *argv[])
{
	int n;
	int m;
	cin >> n >> m;
	int arr[2000000];
	for( int i=0; i<m; ++i ) {
		cin >> arr[i];
	}
	
	sort(arr, arr+m);

// 	quick(arr, 0, m-1);

	for( int i=0; i<m; ++i ) {
		cout << arr[i] << " ";
	}
	return 0;
}

// void quick(int arr[], int left, int right) 
// {
// 	int l = left;
// 	int r = right;
// 	int mid = arr[left];
// 
// 	while( l <= r ) {
// 		while( arr[r] > mid && l <= r ) {
// 			--r;
// 		}
// 
// 		while( arr[l] < mid && l <= r ) {
// 			--l;
// 		}
// 
// 		if( l <= r ) {
// 			swap(arr[l], arr[r]);
// 			++l;
// 			--r;
// 		}
// 
// 		if( left < r ) {
// 			quick(arr, left, r);
// 		}
// 
// 		if( l < right ) {
// 			quick(arr, l, right);
// 		}
// 	}
// }
