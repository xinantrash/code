#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct {
	int vertax_num;
	int edge_num;
	char vertax[50];
	int edge[50][50];
}graph;

bool flag = false;

graph *ini_graph() {
	int vertax_num;
	int edge_num;

	cin >> vertax_num >> edge_num;

	graph *g = (graph *)malloc(sizeof(graph));

	g->vertax_num = vertax_num;
	g->edge_num = edge_num;

	for ( int i=0; i<vertax_num; i++ ) {
		char c;
		cin >> c;
		g->vertax[i] = c;
	}

	for ( int i=0; i<edge_num; i++ ) {
		char x;
		char y;
		cin >> x >> y;
		g->edge[x-'A'][y-'A'] = 1;
	}

	return g;
}

void dfs(graph *g, int i, int visited[], char vertax) {
	if ( g->vertax[i] == vertax ) {
		flag = true;
	}
	visited[i] = 1;
	for ( int j=0; j<g->vertax_num; j++ ) {
		if ( g->edge[i][j] == 1 && visited[j] == 0 ) {
			dfs(g, j, visited, vertax);
		}
	}
}

void dfs_traverse(graph *g, int i, char vertax) {
	int visited[50] = {0};
	dfs(g, i, visited, vertax);
}

int main(int argc, const char *argv[]) {
	graph *g = ini_graph();

	char vertax_1;
	char vertax_2;

	cin >> vertax_1 >> vertax_2;

	dfs_traverse(g, vertax_1-'A', vertax_2);

	if ( !flag ) {
		cout << "no";
	}
	else {
		cout << "yes";
	}

	return 0;
}
