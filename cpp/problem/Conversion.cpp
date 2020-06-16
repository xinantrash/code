#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	string s;
	int i=0;
	int count;
	int sum;
	while(getline(cin,s))
	{
		int count=s.length();
		sum=0;
		for(i=count-1;i>=0;i--){
			if(s[i]>='0'&&s[i]<='9'){
				sum+=(s[i]-48)*pow(16,count-i-1);
			}
			else if(s[i]>='A'&&s[i]<='F'){
				sum+=(s[i]-55)*pow(16,count-i-1);
			}
		}
		cout<<sum;
		break;
	}
}
