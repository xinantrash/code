// #include <cstdarg>
// #include <cstdlib>
// #include <iostream>
// 
// using namespace std;
// 
// #define MAX_ARRAY_DIM 4
// 
// typedef struct {
// 	int *base;
// 	int dim;
// 	int *bounds;
// 	int *constants;
// } Array;
// 
// void ini_array(Array *A, int dim, ...) {
// 	A->dim = dim;
// 	A->bounds = (int *)malloc(dim * sizeof(int));
// 
// 	int total_elem = 1;
// 
// 	va_list len_dim;
// 	va_start(len_dim, dim);
// 
// 	for ( int i=0; i<dim; i++ ) {
// 		A->bounds[i] = va_arg(len_dim, int);
// 
// 		total_elem *= A->bounds[i];
// 	}
// 	va_end(len_dim);
// 
// 	A->base = (int *)malloc(total_elem * sizeof(int));
// 	A->constants[dim-1] = sizeof(int);
// 
// 	for ( int i=dim-2; i>=0; i-- ) {
// 		A->constants[i] = A->constants[i+1] * A->bounds[i+1];
// 	}
// }
// 
// void locate_array(Array *A, int *off, va_list loc_dim) {
// 	*off = 0;
// 
// 	for ( int i=0; i<A->dim; i++ ) {
// 		int index = va_arg(loc_dim, int);
// 
// 		off += index * A->constants[i];
// 	}
// }
// 
// void set_value(Array *A, int *value, ...) {
// 	va_list off_loc;
// 	va_start(off_loc, value);
// 	int off = 0;
// 	locate_array(A, &off, off_loc);
// 	va_end(off_loc);
// 
// 	*(A->base+off) = *value;
// }
// 
// void get_value(Array *A, int *value, ...) {
// 	va_list off_loc;
// 	va_start(off_loc, value);
// 	int off = 0;
// 	locate_array(A, &off, off_loc);
// 	va_end(off_loc);
// 	*value = *(A->base+off);
// }
// 
// int main(int argc, const char *argv[]) {
// 	Array A;
// 	int value = 20;
// 	int v = 0;
// 	ini_array(&A, 3, 5, 6, 7, 8);
// 
// 	set_value(&A, &value, 4, 5, 6);
// 
// 	get_value(&A, &v, 4, 5, 6);
// 
// 	cout << v;
// 
// 	return 0;
// }

#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct {
	int *base;
	int length;
}Array;

Array* ini_array() {
	Array *arr = (Array*)malloc(sizeof(Array));
	arr->base = (int*)malloc(20*sizeof(int));
	arr->length = 0;

	return arr;
}

Array *merge_array(Array *arr1, Array *arr2) {
	Array *arr3 = ini_array();
	int cnt = 0;
	int j = 0;
	int i = 0;

	while ( i < arr1->length ) {
		int flag = false;
		int j = 0;
		while ( j < arr2->length ) {
			if ( arr1->base[i] == arr2->base[j] ) {
				flag = true;
				break;
			}
			else {
				j++;
			}
		}
		if ( !flag ) {
			arr3->base[cnt++] = arr1->base[i];
			arr3->length++;
		}
		i++;
	}

	while ( j < arr2->length ) {
		int flag = false;
		int i = 0;
		while ( i < arr1->length ) {
			if ( arr1->base[i] == arr2->base[j] ) {
				flag = true;
				break;
			}
			else {
				i++;
			}
		}
		if ( !flag ) {
			arr3->base[cnt++] = arr2->base[j];
			arr3->length++;
		}
		j++;
	}

	return arr3;
}

void quick_sort(Array *arr, int left, int right) {
	int l = left;
	int r = right;
	int mid = arr->base[left];

	while ( l <= r ) {
		while ( arr->base[r] < mid && l <= r ) {
			--r;
		}

		while ( arr->base[l] > mid && l <= r ) {
			++l;
		}

		if ( l <= r ) {
			int temp = arr->base[l];
			arr->base[l] = arr->base[r];
			arr->base[r] = temp;

			++l;
			--r;
		}

		if ( left < r ) {
			quick_sort(arr, left, r);
		}

		if ( l < right ) {
			quick_sort(arr, l, right);
		}
	}
}

int main(int argc, const char *argv[]) {
	int arr1_len;
	int arr2_len;

	cin >> arr1_len;

	Array *arr1 = ini_array();

	for ( int i=0; i<arr1_len; i++ ) {
		cin >> arr1->base[i];
		arr1->length++;
	}

	cin >> arr2_len;

	Array *arr2 = ini_array();

	for ( int i=0; i<arr2_len; i++ ) {
		cin >> arr2->base[i];
		arr2->length++;
	}


	arr1 = merge_array(arr1, arr2);

	quick_sort(arr1, 0, arr1->length-1);

	for ( int i=0; i<arr1->length; i++ ) {
		cout << arr1->base[i] << " ";
	}

	return 0;
}
