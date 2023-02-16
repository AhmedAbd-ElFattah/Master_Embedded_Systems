#include <stdio.h>
double square_root(int x){
	double result = x / 2.0;
	while((result * result) > x){
		result = (result + (x/result))/2.0;
	}
	return result;
}

int main(){
printf("Test Case 1 Input is 2 output %lf \n", square_root(4));
printf("Test Case 2 Input is 10 output %lf \n", square_root(10));
}