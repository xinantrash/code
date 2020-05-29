#include<stdio.h>

int main(int argc, const char *argv[])
{
	int n;
	scanf("%d", &n);
	for( int i=1; i<=n; i++ ){
		if( i<10 ){
			printf("%d\n", i);
		}
		else{
			
			int num = i;
			int ans = 0;
			while( num!=0 ){
				ans *= 10;
				ans += num%10;
				num /= 10;
			}
			if( ans==i ){
				printf("%d\n", i);
			}
		}
	}

	return 0;
}
