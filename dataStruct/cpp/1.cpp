#include <stdio.h>

int main() 
{
	int a[30] = {0};
	int cnt = 0;
	int position;
	int value;
	int i;
	while(1)
	{
		int value;
		scanf("%d",&value);
		if ( value == -1 ) {
			break;
		}
		a[cnt++] = value;
	}
	scanf("%d %d",&position,&value);
	for (i=cnt-1;i>=position-1;i--) 
	{
		a[i+1] = a[i];
	}
	a[position-1] = value;
	for (i=0;i<cnt+1;i++) 
	{
		printf("%d ",a[i]);
	}
	return 0;
}
