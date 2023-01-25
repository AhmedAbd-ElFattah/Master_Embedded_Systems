#include <stdio.h>

int main(){
  char operator;
  float op1, op2;
  printf("Enter operator either + or - or * or / :\n");
  scanf("%c", &operator);
  printf("Enter Two operands :\n");
  scanf("%f", &op1);
  scanf("%f", &op2);
  
  switch (operator){
  case '+':
  op1 += op2;
  break;
  
  case '-':
  op1 -= op2;
  break;
  
  case '*':
  op1 *= op2;
  break;
  
  case '/':
  if (op2 == 0){
  printf("Error !!! Division by zero");
  return -10;
  }
  else{
  op1 /= op2;
  }
  break;
  }
  
  printf("Result is %f \n", op1);
  
 return 0;
}

