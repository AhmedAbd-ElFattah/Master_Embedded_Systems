#include <stdio.h>

int main(){
  int number_of_data;
  float summation, temp_val;
  printf("Enter The numbers of data \n");
  scanf("%d", &number_of_data);
  
  for (int i = 0; i<number_of_data; i++){
  printf("%d. Enter number:\n", i+1);
  scanf("%f", &temp_val);
  summation += temp_val;
  }
  
  summation /= number_of_data;
  printf("Average %f \n", summation );
  return 0;
}

