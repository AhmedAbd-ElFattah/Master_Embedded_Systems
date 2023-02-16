#include <stdio.h>
#include <stdbool.h>

bool flag = false;
#define MAX_SIZE  100
char string_s[MAX_SIZE];
int main(){
  printf("Enter a string : ");
  scanf("%s", string_s);
 
  for (int i = MAX_SIZE-1; i>= 0; i--){
    if (0 == string_s[i]){
    flag = true;
    continue;
    }
    if (flag){
    printf("%c", string_s[i]);
    }
  
  }
  return 0;
}

