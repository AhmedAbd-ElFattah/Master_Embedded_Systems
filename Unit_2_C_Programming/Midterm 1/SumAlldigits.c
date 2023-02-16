#include <stdio.h>

int sumAllDigits(int x){
	int result = 0;
	while(x){
		result += x % 10;
		x /=10;
	}
	return result;
}

int main(){
    printf("Test Case 1 Input is 123 output is %d \n", sumAllDigits(123));
    printf("Test Case 2 Input is 4565 output is %d \n", sumAllDigits(4565));
}