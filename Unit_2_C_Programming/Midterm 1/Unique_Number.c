#include <stdio.h>

int unique_number(int *arr, int arr_size){
	int result = 0;
	for(int i = 0; i<arr_size; i++){
		result ^= arr[i];
	}
	return result;
}

int main(void) {
	int arr_1[7]={4,2,5,2,5,7,4};
	printf("Test Case 1 --> %d \n", unique_number(arr_1, 7));
	int arr_2[3]={4,2,4};
	printf("Test Case 2 --> %d \n", unique_number(arr_2, 3));
    
	return 0;
}