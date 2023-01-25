#include <stdio.h>

int main(){
  float number;
  printf("Enter a Number :\n");
  scanf("%f", &number);
  if (number > 0.0){
  printf("%f is Positive. \n", number);
  }
  else if (number < 0.0){
  printf("%f is Negative. \n", number);
  }
  else if (number == 0.0){
  printf("You entered zero. \n");
  }
  return 0;
}

