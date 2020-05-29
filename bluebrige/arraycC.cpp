#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int arr[10000] = {0};
	int n;
	cin >> n;
	for( int i=0; i<n; i++ ) {
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	int sum = 0;
	for( int i=0; i<n; i++ ) {
		sum += arr[i];
		if( arr[i] > max ) {
			max = arr[i];
		}
		if( arr[i] < min ) {
			min = arr[i];
		}
	}
	cout << max <<endl << min << endl << sum;
	return 0;
}
