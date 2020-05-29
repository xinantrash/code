#include<stdio.h>

int main(int argc, const char *argv[])
{
	int array0[20] = {0};
	int array1[20];
	int array2[20];
	int array3[50] = {0};
	int temp;
	int i;
	int j;
	int n0;
	int n1;
	int n2;
	int n3;

	scanf("%d", &n1);
	for( i=0; i<n1; i++ ) {
		scanf("%d", &array1[i]);
	}

	scanf("%d", &n2);
	for( i=0; i<n2; i++ ) {
		scanf("%d", &array2[i]);
	}
	
	n0 = 0;
	for( i=0; i<n1; i++ ) {
		for( j=0; j<n2; j++ ) {
			if( array1[i] == array2[j] ) {
				array0[n0++] = array1[i];
			}
		}
	}

	n3 = 0;
	int flag;
	for( i=0; i<n1; i++ ) {
		flag = 0;
		for( j=0; j<n0; j++ ) {
			if( array1[i] != array0[j] ) {
				flag++;
			}
		}
		if( flag == n0 ) {
			array3[n3++] = array1[i];
		}
	}
	printf("\n");

	for( i=0; i<n2; i++ ) {
		flag = 0;
		for( j=0; j<n0; j++ ) {
			if( array2[i] != array0[j] ) {
				flag++;
			}
		}
		if( flag == n0 ) {
			array3[n3++] = array2[i];
		}
	}
	
	for( i=0; i<n3; i++ ) {
		for( j=i+1; j<n3; j++ ) {
			if( array3[i] < array3[j] ) {
				temp = array3[j];
				array3[j] = array3[i];
				array3[i] = temp;
			}
		}
	}

	for( i=0; i<n3; i++ ) {
		printf("%d ", array3[i]);
	}

	return 0;
}
