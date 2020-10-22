#include<iostream>
using namespace std;
int main(){
    int sum1=0,sum2=0,sum;
    int n;
    for(int i = 0;i < 100;i++){
        cin >> n;
        while(n % 5 == 0){
            sum1++; 
            n =n / 5; 
        }
        while(n%2 == 0){
            sum2++;
            n = n / 2;
        }
    }
    sum = min(sum1,sum2);
    cout << sum << endl;
    return 0;
}
