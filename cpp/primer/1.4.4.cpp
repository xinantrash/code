#include<iostream>

int main(int argc, const char *argv[])
{
	//currVal is our counting number;
	//val is a inputing number;
	int currVal = 0;
	int val     = 0;

	if( std::cin >> currVal ) {
		int cnt = 1; 	//the val appearance time

		while( std::cin >> val ) {
			if( val == currVal ) {
				cnt++; 		//when val is equal the currVal, cnt add 1
			}

			else {
				std::cout << currVal << " occurs " << cnt << " times"
					<< std::endl;
				currVal = val; 		//remember the val
				cnt = 1;
			}
		}

		std::cout << currVal << " occurs " 
			<< cnt << " times" << std::endl;
	}

	return 0;
}
