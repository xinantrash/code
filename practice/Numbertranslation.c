#include<stdio.h>

int main(int argc, const char *argv[])
{
	int n   = 0;
	int cnt = 0;
	scanf("%d", &n);
	while( n!=1 ){
		if( n%2==0 ){
			n = n/2;
			cnt++;
		}
		else{
			n = n*3+1;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
