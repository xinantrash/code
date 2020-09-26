#include <iostream>
#include <cstdlib>
#define LIST_INIT_SIZE 100
#define elem_type int

using namespace std;

typedef struct {
	elem_type *elem;
	int length;
	int list_size;
}sq_list;

int ini_list(sq_list &list) {
	list.elem = (elem_type*)malloc(LIST_INIT_SIZE*sizeof(elem_type));

	if ( !list.elem ) {
		exit(-1);
	}
	list.length = 0;
	list.list_size = LIST_INIT_SIZE;
	return 1;
}

int insert_list(sq_list &list, int i, elem_type element) {
	if ( i < 1 || i > list.length+1 ) {
		return 0;
	}

	elem_type *insert_position = &(list.elem[i-1]);
	for ( elem_type *temp = &(list.elem[list.length-1]); temp>=insert_position; --temp ) {
		*(temp+1) = *temp;
	}
	*insert_position = element;
	++list.length;
	return 1;
}

int main(int argc, const char *argv[]) {
	int num;
	int temp;
	cin >> num;
	sq_list list;
	ini_list(list);

	for ( int i=0; i<=num; i++ ) {
		cin >> temp;

		insert_list(list, i, temp);
	}

	cout << endl;

	cin >> temp;

	for ( int i=0; i<list.length; i++ ) {
		if ( temp < list.elem[i] ) {
			insert_list(list, i+1, temp);
			break;
		}
	}

	for ( int i=0; i<list.length; i++ ) {
		cout << list.elem[i] << " ";
	}

	return 0;
}
