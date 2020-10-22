#include <stdio.h>

int length(char str[]) {
	int cnt = 0;
	while ( str[cnt] != ' ' ) {
		cnt++;
	}

	return cnt;
}

void str_bin(char str1[], char str2[]) {
	
}

int main(int argc, const char *argv[]) {
	char str1[100] = {' '};
	char str2[100] = {' '};

	scanf("%s", str1);
}
