#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bucketSort(float arr[], int n);

int main(int argc, const char *argv[]) {
	float arr[10] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 
		0.68};

	for( int i=0; i<10; ++i ) {
		cout << arr[i] << " ";
	}

	cout << endl;

	bucketSort(arr, 10);

	for( int i=0; i<10; ++i ) {
		cout << arr[i] << " ";
	}

	return 0;
}

void bucketSort(float arr[], int n) {
	vector<float> nums[n];

	for( int i=0; i<n; ++i ) {
		int numsI = n*arr[i];
		nums[numsI].push_back(arr[i]);
	}

	for( int i=0; i<n; ++i ) {
		sort(nums[i].begin(), nums[i].end());
	}
	
	int index = 0;
	for( int i=0; i<n; ++i ) {
		for( int j=0; j<nums[i].size(); ++j ) {
			arr[index++] = nums[i][j]; 
		}
	}
}
