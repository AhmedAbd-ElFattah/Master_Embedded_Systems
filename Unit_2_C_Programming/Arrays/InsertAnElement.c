#include <stdio.h>
#include <stdlib.h>

int main(){
  int size;
  printf("Enter no of elements \n");
  scanf("%d", &size);
  int *arr = malloc(size*sizeof(int));
  
  int temp_location;
  int temp_val;
  for (int i = 0; i<size; i++){
  printf("Enter the Location :\n");
  scanf("%d", &temp_location);
  
  printf("Enter the element to be inserted :\n");
  scanf("%d", &temp_val);
  arr[temp_location] = temp_val;
}
  
  for (int i = 0; i<size; i++){
  printf("%d ", arr[i]);
  }
  return 0;
}

