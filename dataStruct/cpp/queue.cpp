#include <cstdlib>
#include <iostream>

using namespace std;

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

void clear_queue(queue *Q) {
	while ( Q->front->next != NULL ) {
		Q->rear = Q->front->next;
		free(Q->front);
		Q->front = Q->rear;
	}
}

void en_queue(queue *Q, int value) {
	node *temp = (node *)malloc(sizeof(node));

	temp->value   = value;
	temp->next    = NULL;
	Q->rear->next = temp;
	Q->rear       = temp;
}

void de_queue(queue *Q) {
	if ( Q->front == Q->rear ) {
		cout << "error" << endl;
		return;
	}

	node *temp = Q->front->next;
	Q->front->next = temp->next;

	if ( Q->rear == temp ) {
		Q->rear = Q->front;
	}

	free(temp);
}

void show_queue(queue *Q) {
	node *temp = Q->front;

	while ( temp->next != NULL ) {
		cout << temp->next->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main(int argc, const char *argv[]) {
	queue *Q = ini_queue();
	int n;
	cin >> n;
	for ( int i=0; i<n; i++ ) {
		int value;
		cin >> value;
		en_queue(Q, value);
	}

	de_queue(Q);

	show_queue(Q);

	clear_queue(Q);

	show_queue(Q);

	return 0;
}
