#include<stdio.h>

int main(int argc, const char *argv[])
{
	long long int n   = 0;
	long long int sum = 0;
	long long int ans = 0;
	scanf("%lld", &n);
	for( int i=1; i<=n; i++ ){
		for( int j=1; j<=i; j++ ){
			sum += j;
		}
		ans += sum;
		sum  = 0;
	}
	printf("%lld", ans);
	return 0;
}
