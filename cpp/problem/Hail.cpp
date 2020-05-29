#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
	int arr[1000];
	int n;
	int flag;
	cin >> n;

	for( int i=0; i<1000; ++i ) {
		arr[i] = 0;
	}

	arr[0] = n;

	for( int i=0; i<1000; ) {
		if( arr[i] == 1 ) {
			flag = i;
			break;
		}

		if( arr[i] % 2 == 0 ) {
			arr[i+1] = arr[i] / 2;
			++i;
		}
		else {
			arr[i+1] = arr[i] * 3 + 1;
			++i;
		}
	}

	for( int i=flag; i>=0; --i ) {
		cout << arr[i] << " ";
	}
	return 0;
}
