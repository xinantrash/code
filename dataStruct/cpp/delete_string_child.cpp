#include <iostream>
#include <cstdio>

using namespace std;

int position[255] = {0};
char str1[256];
char temp[256];

int length(char str[]) {
	int cnt = 0;
	
	while ( str[cnt] != '\0' ) {
		cnt++;
	}

	return cnt;
}

void delete_string(char str1[], char temp[]) {
	int str1_len = length(str1);
	int temp_len = length(temp);
	int index = 0;
	for ( int i=0,j=0; i<str1_len; i++ ) {
		if ( str1[i] == temp[j] ) {
			j++;
			if ( j == temp_len ) {
				for ( int k=i-temp_len+1; k<=i; k++ ) {
					str1[k] = ' ';
				}
				int position = i-temp_len+1;
				for ( int t=position; t<length(str1); t++ ) {
					str1[t] = str1[t+temp_len];
				}
			}
		}
		else { 
			j = 0;
		}
	}
}

int main(int argc, const char *argv[]) {

	gets(str1);
	gets(temp);

	delete_string(str1, temp);

	cout << endl << str1;

	return 0;
}
