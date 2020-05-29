#include<stdio.h>


int main(int argc, const char *argv[])
{
	int number;
	int i;
	int ans[1000000];
	scanf("%d", &number);
	ans[0] = 1;
	ans[1] = 1;
	for( i=2; i<number; i++ ){
		ans[i] = (ans[i-2] + ans[i-1])%10007;
	}
	printf("%d", ans[number-1]);
	return 0;
}


// 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4148 6792 10940 17732 
