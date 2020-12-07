#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct {
	int vertax[100];
	int edge[100][100];
	int vertax_num;
	int edge_num;
}graph;

typedef struct q_node {
	int value;
	struct q_node *next;
}node;

typedef struct {
	node *front;
	node *rear;
}queue;

queue *ini_queue() {
	queue *Q = (queue *)malloc(sizeof(queue));
	Q->front = Q->rear = (node *)malloc(sizeof(node));

	Q->front->next = NULL;

	return Q;
}

void en_queue(queue *Q, int value) {
	node *temp = (node *)malloc(sizeof(node));

	temp->value   = value;
	temp->next    = NULL;
	Q->rear->next = temp;
	Q->rear       = temp;
}

void de_queue(queue *Q, int *val) {
	if ( Q->front == Q->rear ) {
		cout << "error" << endl;
		return;
	}

	node *temp = Q->front->next;
	*val = temp->value;
	Q->front->next = temp->next;

	if ( Q->rear == temp ) {

		Q->rear = Q->front;
	}

	free(temp);
}

int empty_queue(queue *Q) {
	return Q->front == Q->rear;
}

void dfs(graph *g, int i, int visited[]) {
	cout << g->vertax[i] << " ";
	visited[i] = true;
	for ( int j=0; j<g->vertax_num; j++ ) {
		if ( g->edge[i][j] == 1 && visited[j] == 0 ) {
			dfs(g, j, visited);
		}
	}
}

void dfs_traverse(graph *g, int i) {
	int visited[100] = {0};
	dfs(g, i, visited);
}

void bfs(graph *g, int i, int visited[]) {
	int k;

	queue *q = ini_queue();

	visited[i] = 1;
	cout << g->vertax[i] << " ";
	en_queue(q, i);

	while ( !empty_queue(q) ) {
		de_queue(q, &k);
		for ( int j=0; j<g->vertax_num; j++ ) {
			if ( !visited[j] && g->edge[k][j] != 0 ) {
				cout << g->vertax[j] << " ";
				visited[j] = 1;
				en_queue(q, j);
			}
		}
	}
}

void bfs_traverse(graph *g, int i) {
	int visited[100] = {0};
	bfs(g, i, visited);
}

void delete_vertax(graph *g, int vertax) {
	for ( int i=0; i<g->vertax_num; i++ ) {
		g->edge[vertax][i] = 0;
		g->edge[i][vertax] = 0;
	}
}

int main(int argc, const char *argv[]) {
	int vertax_num;
	int edge_num;
	int ver;
	graph g;

	cin >> vertax_num >> edge_num;

	g.vertax_num = vertax_num;
	g.edge_num = edge_num;

	for ( int i=0; i<vertax_num; i++ ) {
		g.vertax[i] = i;
	}

	for ( int i=0; i<edge_num; i++ ) {
		int x;
		int y;
		cin >> x >> y;
		g.edge[x][y] = 1;
		g.edge[y][x] = 1;
	}

	cin >> ver;

	dfs_traverse(&g, 0);

	cout << endl;

	bfs_traverse(&g, 0);

	delete_vertax(&g, ver);

	cout << endl;

	dfs_traverse(&g, 0);

	cout << endl;

	bfs_traverse(&g, 0);

	return 0;
}
