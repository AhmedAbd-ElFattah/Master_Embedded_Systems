#include <stdio.h>

int sum_numbers_from_1_to(int result){
	result = result*(result+1)/2;
	return result;
}

int main(void) {
	printf("Result %d \n", sum_numbers_from_1_to(100));
	return 0;
}