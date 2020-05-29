#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	string number;
	int answer = 0;
	cin >> number;

	for( int i=0; i<number.size(); i++ ) {
		answer += number[i] - '0';
	}


	cout << answer;

	return 0;
}
