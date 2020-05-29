#include<stdio.h>

int main(int argc, const char *argv[])
{
	int n;
	int i;
	int j;
	int a[200];

	scanf("%d", &n);

	for( i = 0; i < 200; i++ ) {
		a[i] = 0;
	}

	for( i = 0; i < n; i++ ) {
		scanf("%d", &a[i]);
	}

	for( i = 0; i < n; i++ ) {
		for( j = i+1; j < n; j++ ) {
			if( a[i] > a[j] ) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for( i = 0; i < n; i++ ) {
		printf("%d ", a[i]);
	}

	return 0;

}
