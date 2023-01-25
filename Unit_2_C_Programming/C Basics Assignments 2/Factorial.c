#include <stdio.h>

int main(){
  int number;
  int factorial = 1;
  printf("Enter an integer :\n");
  scanf("%d", &number);
  
  if (number > 0){
    for (int i = 1; i<(number+1); i++){
  factorial *= i;
  }
 printf("Factorial = %d \n", factorial);
  }
  
  else{
  printf("Error!!! Factorial of negative number doesn't exist. \n");
  }

 return 0;
}

