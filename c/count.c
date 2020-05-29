#include<stdio.h>

int main(int argc, const char *argv[])
{
	int n;
	int mul = 1;
	int ans = 0;
	scanf("%d", &n);
	for( int i=1; i<=n; i++ ){
		for( int j=1; j<=i; j++ ){
			mul *= j;
		}
		ans += mul;
		mul = 1;
	}
	printf("%d", ans);
	return 0;
}
