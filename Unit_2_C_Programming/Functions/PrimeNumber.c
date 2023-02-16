#include <stdio.h>
#include <stdbool.h>

void prime_numbers_between_two_numbers(int first_number, int second_number){
	for (int num = first_number; num<second_number; num++){
		int prime_num = true;
		for (int i = 2; i<num; i++){
			if ((num % i) == 0){
				prime_num = false;
				break;
			}
		}
		if (true == prime_num){
			printf("%d \n", num);
		}
	}
}

int main(){
  int from, to;
  printf("Enter Interval Please --> ");
  scanf("%d %d", &from, &to);
  prime_numbers_between_two_numbers(from, to);
}
