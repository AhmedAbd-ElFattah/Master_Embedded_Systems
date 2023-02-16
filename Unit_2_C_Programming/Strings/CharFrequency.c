#include <stdio.h>

#define MAX_STRING_SIZE   100

int main(){
  char myString[MAX_STRING_SIZE];
  int counter = 0;
  
  printf("Enter a string \n");
  fflush(stdin); 
  fflush(stdout);
  gets(myString);
  char target_char;
  

  
  printf("Enter a character to find frequency : ");

  scanf("%c", &target_char);
  
  for (int i = 0; i<MAX_STRING_SIZE; i++){
    if (myString[i] == 0){
    break;
  }
    if (target_char == myString[i]){
    counter++;
  }
  
  }
  printf("Frequency of %c is %d \n", target_char, counter);
}
