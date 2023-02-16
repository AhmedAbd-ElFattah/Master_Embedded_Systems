#include <stdio.h>

int main(){
  char character;
  printf("Enter Character --> \n");
  scanf("%c", &character);
  
  printf("ASCII value of Character %c --> %d \n", character, character);
  return 0;
}
