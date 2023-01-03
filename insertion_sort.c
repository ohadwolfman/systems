#include <stdio.h>

void print_array(int* data, int n) {
	int i;
	for(i = 0; i<n; i++) {
		printf("%d ", *data);
		data+=sizeof(int);
	}
	printf("\n");
}

void shift_element(int* arr, int i){
    int* pointer=arr;
    for(int j=i+1; j>0; j--){
        pointer = arr+=j*sizeof(int);
        *pointer = (pointer-sizeof(int));
    }
}

void insert_sort (int* arr, int len){
    int* i, last = arr + (len-1)*sizeof(int);
    for(int j=1; j<len; j++){
        i = arr+j*sizeof(int);
        if(*i < *(i-sizeof(int))){
            int temp = *i;
            for(int* k = i-sizeof(int); k >= arr; k-=sizeof(int)){
                if(*k < temp){
                    shift_element(arr, k+sizeof(int));
                    *(k+sizeof(int))=temp;
                }
            }
        }
    }
}