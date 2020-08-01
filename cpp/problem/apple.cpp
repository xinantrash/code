#include<bits/stdc++.h>

using namespace std;

int n;
int s;
int a;
int b;
int x[5000];
int y[5000];
int i;
int j;
int cnt = 0;

int main(int argc , const char *argv[]) {
    
    scanf("%d %d" , &n , &s);
    scanf("%d %d" , &a , &b);

    for( i=0; i<n; i++ ) {
        scanf("%d %d" , &x[i] , &y[i]);
    }

    for( i=1; i<n; i++ ) {
        for( j=0; j<n-i; j++ ) {
            if( y[j]>y[j+1] ){
                int temp1 = x[j];
                x[j] = x[j+1];
                x[j+1] = temp1;
                int temp2 = y[j];
                y[j] = y[j+1];
                y[j+1] = temp2;
            }
        }
    }
    for( i=0; i<n; i++ ) {
        if( s>=y[i] && (a+b)>=x[i] ) {
            cnt++;
            s -= y[i];
        }
    }
    printf("%d" , cnt);
    return 0;
}
