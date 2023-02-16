#include <stdio.h>

int factorial(int number){
  if (number == 1){
      return number;
  }
  return number*factorial(number-1);
}

int main(){
  int number;
  printf("Enter number : ");
  scanf("%d", &number);
  printf("%d \n", factorial(number));

}
