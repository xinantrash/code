#include <iostream>

using namespace std;

char str3[220];

int length(char str[]) {
	int cnt = 0;
	
	for ( int i=0; i<110; i++ ) {
		if ( str[i] != '\0' ) {
			cnt++;
		}
		else {
			break;
		}
	}

	return cnt;
}

void str_bin(char str1[], char str2[]) {
	int flag = true;
	for ( int i=0; i<length(str2); i++ ) {
		for ( int j=0; j<length(str1); j++ ) {
			if ( str2[i] < str1[j] ) {
				flag = false;
				for ( int k=length(str1)-1; k>=j; k-- ) {
					str1[k+1] = str1[k];
				}
				str1[j] = str2[i];
				break;
			}
			else {
				
			}
		}
		if ( flag ) {
			str1[length(str1)] = str2[i];
		}
		flag = true;
	}
}

int main(int argc, const char *argv[]) {
	char str1[110] = {'\0'};
	char str2[110] = {'\0'};

	cin >> str1;
	cin >> str2;

	str_bin(str1, str2);

	cout << str1;

	return 0;
}
