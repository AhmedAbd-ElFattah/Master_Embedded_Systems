#include <stdio.h>

int main(){
  int number;
  int summation = 0;
  printf("Enter an integer :\n");
  scanf("%d", &number);
  
  for (int i = 1; i<(number+1); i++){
  summation += i;
  }
 printf("Sum = %d \n", summation);
 return 0;
}

