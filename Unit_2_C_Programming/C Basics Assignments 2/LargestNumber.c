#include <stdio.h>

int main(){
  float number, largest_num;
  printf("Enter Three Numbers :\n");
  scanf("%f \n", &number);
  largest_num = number;
  
  scanf("%f \n", &number);
  if (number > largest_num){
  largest_num = number;
  }
  
  scanf("%f", &number);
  if (number > largest_num){
  largest_num = number;
  }
  
  printf("Largest Number = %f \n" , largest_num);
  return 0;
}

