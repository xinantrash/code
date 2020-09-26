#include <algorithm>
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
	sq_list list_a;
	sq_list list_b;
	sq_list list_ans;
	int a;
	int b;
	int temp;

	ini_list(list_a);
	ini_list(list_b);
	ini_list(list_ans);

	cin >> a;

	for ( int i=1; i<=a; i++ ) {
		cin >> temp;
		insert_list(list_a, i, temp);
	}

	cin >> b;

	for ( int i=1; i<=b; i++ ) {
		cin >>temp;
		insert_list(list_b, i, temp);
	}

	for ( int i=0; i<list_a.length; i++ ) {
		cout << list_a.elem[i] << " ";
	}
	cout << endl;

	for ( int i=0; i<list_b.length; i++ ) {
		cout << list_b.elem[i] << " ";
	}
	cout << endl;

	int max_len = max(list_a.length, list_b.length);
	int min_len = min(list_a.length, list_b.length);
	int k;
	int j;

	for ( k=0, j=0; k<min_len&&j<min_len; ) {
		cout << list_a.elem[k] << " " << list_b.elem[j] << endl;
		if ( list_a.elem[k] <= list_b.elem[j] ) {
			++k;
			insert_list(list_ans, k, list_a.elem[k]);
		}
		else {
			++j;
			insert_list(list_ans, j, list_b.elem[j]);
		}
	}

	if ( k == list_a.length-1 ) {
		for ( int i=min_len; i<list_b.length; ) {
			i++;
			insert_list(list_ans, i, list_b.elem[i]);
		}
	}
	if ( j == list_b.length-1 ) {
		for ( int i=min_len; i<list_a.length; ) {
			i++;
			insert_list(list_ans, i, list_a.elem[i]);
		}
	}

	for ( int i=0; i<list_ans.length; i++ ) {
		cout << list_ans.elem[i] << " ";
	}

	return 0;
}
