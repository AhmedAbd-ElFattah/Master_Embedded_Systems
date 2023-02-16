#include <stdio.h>

int power(int base, int exponent){
  if (exponent == 1){
      return base;
  }
  return base * power(base, exponent-1);
}

int main(){
  int base_val, power_val;
  printf("Enter base number : ");
  scanf("%d", &base_val);
  
  printf("Enter power number : ");
  scanf("%d", &power_val);
  
  printf("%d \n", power(base_val, power_val));

}
