#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	string line;
	getline(cin, line);
	cout << line << " " << line.empty() << " " << line.size() << endl;
	
	return 0;
}
