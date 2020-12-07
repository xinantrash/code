#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct {
	int vertax[51];
	int edge[51][51];
	int vertax_num;
	int edge_num;
}graph;

int cnt = 0;

graph *ini_graph() {
	int vertax_num;
	int edge_num;

	cin >> vertax_num >> edge_num;

	graph *g = (graph *)malloc(sizeof(graph));


	g->vertax_num = vertax_num;
	g->edge_num = edge_num;

	for ( int i=1; i<=vertax_num; i++ ) {
		g->vertax[i] = i;
	}

	for ( int i=1; i<=edge_num; i++ ) {
		int x;
		int y;
		cin >> x >> y;
		g->edge[x][y] = 1;
		g->edge[y][x] = 1;
	}

	return g;
}

void dfs(graph *g, int i, int visited[]) {
	if ( cnt == 1 ) {
		cout << g->vertax[i];
	}
	cnt++;
	visited[i] = true;
	for ( int j=1; j<=g->vertax_num; j++ ) {
		if ( g->edge[i][j] == 1 && visited[j] == 0 ) {
			dfs(g, j, visited);
		}
	}
}

void dfs_traverse(graph *g, int i) {
	int visited[51] = {0};
	dfs(g, i, visited);
}

int main(int argc, const char *argv[]) {
	graph *g = ini_graph();

	int k;
	cin >> k;

	dfs_traverse(g, k);
}
