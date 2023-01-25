#include <stdio.h>

int main(){
  float num_1, num_2;
  printf("Enter Value of a: ");
  scanf("%f", &num_1);
  printf("Enter Value of b: ");
  scanf("%f", &num_2);
  num_1 = num_1 + num_2;
  num_2 = num_1 - num_2;
  num_1 = num_1 - num_2;
  printf("After swapping, value of a = %f\n", num_1);
  printf("After swapping, value of b = %f\n", num_2);
  return 0;
}

