#include<stdio.h>

int main(int argc, const char *argv[])
{
	int num;
	int time = 0;
	scanf("%d", &num);
	while( num>=12 ){
		time += 4;
		num  -= 12;
	}
	printf("%d", time+2);
	return 0;
}
