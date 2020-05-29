#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a[21];
	int n;
	scanf("%d", &n);

	for( int i=1; i<21; i++ ){
		a[i] = 0;
	}
	a[1] = 0;
	a[2] = 1;
	a[3] = 1;

	for( int i=4; i<=n; i++ ){
		a[i] = a[i-3] + 2*a[i-2] + a[i-1];
	}

	printf("%d", a[n]);
	return 0;
}
