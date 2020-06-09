#include <bits/stdc++.h>

using namespace std;

void quickSort(vector<int> &nums, int left, int right);

int main(int argc, const char *argv[])
{
	vector<int> nums(10);
	cout << nums.size();
	for( int i=0; i<nums.size(); ++i ) {
		cin >> nums[i];
	}
	quickSort(nums, 0, nums.size());
	for( int i=0; i<nums.size(); ++i ) {
		cout << nums[i] << " ";
	}
	return 0;
}

void quickSort(vector<int> &nums, int left, int right)
{
	int l = left;
	int r = right;
	int mid = nums[left];

	while( l <= r ) {
		
		while( nums[r] > mid && l <= r ) {
			--r;
		}

		while( nums[l] < mid && l <= r  ) {
			++l;
		}

		if( l <= r ) {
			swap(nums[l], nums[r]);
			++l;
			--r;
		}
		if( left < r ) {
			quickSort(nums, left, r);
		}
		if( l < right ) {
			quickSort(nums, l, right);
		}
	}
}

// #include <bits/stdc++.h>
// 
// using namespace std;
// 
// void quickSort(int arr[], int left, int right);
// 
// int main(int argc, const char *argv[])
// {
// 	int n;
// 	int arr[100000];
// 	cin >> n;
// 	for( int i=0; i<n; ++i ) {
// 		cin >> arr[i];
// 	}
// 
// 	quickSort(arr, 0, n-1);
// 
// 	for( int i=0; i<n; ++i ) {
// 		cout << arr[i] << " ";
// 	}
// 	return 0;
// }
// 
// void quickSort(int arr[], int left, int right)
// {
// 	if( left >= right ) {
// 		return;
// 	}
// 
// 	int l = left;
// 	int r = right;
// 	int mid = arr[left];
// 
// 	while( l < r ) {
// 		while( arr[r] >= mid && l < r ) {
// 			r--;
// 		}
// 		while( arr[l] <= mid && l < r ) {
// 			l++;
// 		}
// 
// 		if( l < r ) {
// 			int temp = arr[r];
// 			arr[r] = arr[l];
// 			arr[l] = temp;
// 		}
// 	}
// 
// 	arr[left] = arr[l];
// 	arr[l] = mid;
// 
// 	quickSort(arr, left, l-1);
// 	quickSort(arr, l+1, right);
// }

// #include <bits/stdc++.h>
// 
// using namespace std;
// 
// void quickSort(int arr[], int left, int right);
// 
// int main(int argc, const char *argv[])
// {
// 	int n;
// 	int arr[100000];
// 	cin >> n;
// 	for( int i=0; i<n; ++i ) {
// 		cin >> arr[i];
// 	}
// 
// 	quickSort(arr, 0, n-1);
// 
// 	for( int i=0; i<n; ++i ) {
// 		cout << arr[i] << " ";
// 	}
// 	return 0;
// }
// 
// void quickSort(int arr[], int left, int right)
// {
// 	int l = left;
// 	int r = right;
// 	int mid = arr[(left+right)/2];
// 
// 	while( l < r ) {
// 		while( mid < arr[r] ) {
// 			r--;
// 		}
// 
// 		while( mid > arr[l] ) {
// 			l++;
// 		}
// 
// 		if( l <= r ) {
// 			swap(arr[l], arr[r]);
// 			l++;
// 			r--;
// 		}
// 	}
// 	if( left < r ) {
// 		quickSort(arr, left, r);
// 	}
// 	if( l < right ) {
// 		quickSort(arr, l, right);
// 	}
// }


