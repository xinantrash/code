#include <bits/stdc++.h>

using namespace std;
int m;
int n;
int N;
int cnt = 0;
int blocks[101][101] = {{0}};

void dfs(int x, int y) {
	blocks[x][y] = 0;

	if ( blocks[x-1][y] ) {
		dfs(x-1,y);
	}

	if ( blocks[x+1][y] ) {
		dfs(x+1,y);
	}

	if ( blocks[x][y-1] ) {
		dfs(x,y-1);
	}

	if ( blocks[x][y+1] ) {
		dfs(x,y+1);
	}
}

int main(int argc, const char *argv[]) {
	cin >> N;

	while ( N > 0 ) {
		cin >> m >> n;
		for ( int i=1; i<=m; i++ ) {
			for ( int j=1; j<=n; j++ ) {
				cin >> blocks[i][j];
			}
		}

		for ( int i=1; i<=m; i++ ) {
			for ( int j=1; j<=n; j++ ) {
				if ( blocks[i][j] ) {
					cnt++;
					dfs(i,j);
				}
			}
		}

		cout << cnt << endl;
		N--;
		cnt = 0;
	}
	
	return 0;
}
