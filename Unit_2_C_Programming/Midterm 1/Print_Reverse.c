#include <stdio.h>

void print_reverse(int *arr, int arr_size){
	arr_size--;
	while(arr_size>=0){
		printf("%d ", arr[arr_size]);
		arr_size--;
	}
}

int main(void) {
	int arr[5]={1,2,3,4,5};
	print_reverse(arr, 5);
    printf("\n");
	return 0;
}