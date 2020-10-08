#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
	int a[30] = {0};
	int cnt = 0;
	do {
		int value;
		cin >> value;
		if ( value == -1 ) {
			break;
		}
		a[cnt++] = value;
	} while ( 1 );

	int position;
	int value;
	cin >> position >> value;

	for ( int i=cnt-1; i>=position-1; i-- ) {
		a[i+1] = a[i];
	}

	a[position-1] = value;

	for ( int i=0; i<cnt+1; i++ ) {
		cout << a[i] << " ";
	}

	return 0;
}
