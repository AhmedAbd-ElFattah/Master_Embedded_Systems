#include <stdio.h>
#define MAX_SIZE  100

int main(){
  char string_s[MAX_SIZE];
  printf("Enter a string : ");
  scanf("%s", string_s);
 
  for (int i = MAX_SIZE-1; i>= 0; i++){
    if (string_s[i] == 0){
    continue;
    
    }
    printf("%c", string_s[i]);
    }
  return 0;
}

