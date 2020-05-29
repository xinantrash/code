#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int arr[200];
	int n;
	int l;
	int cnt = 0;
	int sum = 0;
	cin >> n;
	int num = n*n;
	for( l=0; sum!=num; l++ ) {
		cin >> arr[l];
		sum += arr[l];
	}

	for( int i=0; i<l; i++ ) {
		if( i%2 == 0 ) {
			for( int j=0; j<arr[i]; j++ ) {
				cout << '0';
				cnt++;
				if( cnt == n ) {
					cout << endl;
					cnt = 0;
				}
			}
		}

		if( i%2 != 0 ) {
			for( int k=0; k<arr[i]; k++ ) {
				cout << '1';
				cnt++;
				if( cnt == n ) {
					cout << endl;
					cnt = 0;
				}
			}
		}
	}
	return 0;
}
