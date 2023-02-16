#include <stdio.h>

void revert_digits(int number){
	if (number == 0){
		return;
	}
	printf("%d", number%10);
	revert_digits(number/10);

}

int main(){
    /*Test Case 1 input:2457 ->output:7542 .*/
    revert_digits(2457);
    printf("\n");
    /*Test Case 2 input:1057 ->output:7501 .*/
    revert_digits(1057);
    printf("\n");
}