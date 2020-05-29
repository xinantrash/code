#include<stdio.h>

int main(int argc, const char *argv[])
{
	long long n;
	long long i;
	long long sum = 0;
	scanf("%lld", &n);
	for( i=1; i<=n; i++ ){
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}
