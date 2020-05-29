#include<stdio.h>

int main(int argc, const char *argv[])
{
	int i;
	int n;
	int m = 0;
	for( i = 1000; i <= 9999; i++ ) {
		n = i;
		while( n!=0 ) {
			m = m*10+n%10;
			n /= 10;
		}
		if( m==i ) {
			printf("%d\n", i);
		}
		m = 0;
	}
	return 0;
}
