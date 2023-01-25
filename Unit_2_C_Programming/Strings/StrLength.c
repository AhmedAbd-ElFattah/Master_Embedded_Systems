#include <stdio.h>
#define MAX_SIZE  100

int main(){
  char string_s[MAX_SIZE];
  printf("Enter a string : ");
  scanf("%s", string_s);
 
  for (int i = 0; i<MAX_SIZE; i++){
    if (string_s[i] == 0){
    printf("Length of String %d \n", i);
    break;
    }
    }
  return 0;
}

