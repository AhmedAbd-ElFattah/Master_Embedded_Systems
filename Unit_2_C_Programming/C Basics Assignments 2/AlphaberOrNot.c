#include <stdio.h>

int main(){
  char letter;
  printf("Enter a character :\n");
  scanf("%c", &letter);
  if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')){
  printf("%c is an alphabet \n", letter);
  }
  else{
  printf("%c is not an alphabet \n", letter);
  }
  return 0;
}

