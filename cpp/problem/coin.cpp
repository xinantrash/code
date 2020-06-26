#include<iostream>
using namespace std;

int use[18]={0};
int x[18]={0};
int n = 0;
int count = 0;

void dfs(int i){
	if(i==n){
		int k =0,flag=0;
		while(x[k]!=0) {
			if(x[k]==1) {
				flag=1;
				cout<<"B";
			}
			else {
				cout<<"T";
			}
			k++;
		}
		if(flag==1) {
			cout<<",";
		}
	}
   	else {
	   	for (int j=1;j<=2;j++) {
         	if (!use[i]) {
         		use[i]=1;
         		x[i]=j;
         		dfs(i+1);
			}
			else {
				continue;
			}
			use[i]=0;
      	}
   	}
}

int main() {
	cin>>n;
	dfs(0);
	return 0;
}
