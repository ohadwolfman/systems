#include <stdio.h>
#include "insert_sort.h"

int main() {
	int arr[5] = {99, 78, -1, 42, 12};
	int n = sizeof(arr)/sizeof(int);

	print_array(arr, n);
	
	insert_sort(arr, n);
	
	print_array(arr, n);
    
    return 0;
}