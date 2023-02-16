#include <stdio.h>

int count_ones(int number){
	int ones = 0;
	/*Assume int is 4 bytes*/
	for (int i = 0; i<32; i++){
		if (number & (1<<i)){
			ones++;
		}
	}
	return ones;
}
int main(){
    printf("Test case 1 Input is 5 output %d \n", count_ones(5));
    printf("Test case 2 Input is 15 output %d \n", count_ones(15));
}