#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <algorithm>

using namespace std;

typedef struct {
	int vertax[100];
	int edge[100][100];
	int id[100][100];
	int vertax_num;
	int edge_num;
}graph;

typedef struct {
	int data;
	int low_cost;
}close_edge;

graph *ini_graph() {
	int vertax_num;
	int edge_num;

	cin >> vertax_num >> edge_num;

	graph *g = (graph *)malloc(sizeof(graph));

	g->vertax_num = vertax_num;
	g->edge_num = edge_num;

	for ( int i=0; i<g->vertax_num; i++ ) {
		for ( int j=0; j<g->vertax_num; j++ ) {
			g->edge[i][j] = INT_MAX;
		}
	}

	for ( int i=0; i<g->vertax_num; i++ ) {
		g->vertax[i] = i;
	}

	for ( int i=0; i<g->edge_num; i++ ) {
		int x;
		int y;
		int id;
		int price;
		cin >> id >> x >> y >> price;
		g->id[x][y] = id;
		g->id[y][x] = id;
		g->edge[x][y] = price;
		g->edge[y][x] = price;
	}
	
	return g;
}

int min_num(graph *g, close_edge *close) {
	int min = INT_MAX;
	int index = -1;

	for ( int i=0; i<g->vertax_num; i++ ) {
		if ( close[i].low_cost < min && close[i].low_cost != 0 ) {
			min = close[i].low_cost;
			index = i;
		}
	}

	return index;
}

void prim(graph *g, int u, int res[]) {
	close_edge close[100];

	for ( int i=0; i<g->vertax_num; i++ ) {
		close[i].low_cost = INT_MAX;
	}

	close[u].data = u;
	close[u].low_cost = 0;

	for ( int i=0; i<g->vertax_num; i++ ) {
		if ( i != u ) {
			close[i].data = u;
			close[i].low_cost = g->edge[u][i];
		}
	}

	for ( int i=1; i<g->vertax_num; i++ ) {
		int k = min_num(g, close);
		res[0] += g->edge[close[k].data][k];
		res[i] = g->id[close[k].data][k];
		close[k].low_cost = 0;
		for ( int i=0; i<g->vertax_num; i++ ) {
			if ( g->edge[k][i] < close[i].low_cost ) {
				close[i].data = k;
				close[i].low_cost = g->edge[k][i];
			}
		}
	}
}

int main(int argc, const char *argv[]) {
	graph *g = ini_graph();
	int res[100] = {0};

	prim(g, 0, res);

	sort(res+1, res+g->vertax_num);

	cout << res[0] << endl;

	for ( int i=1; i<g->vertax_num; i++ ) {
		cout << res[i] << " ";
	}
	
	return 0;
}