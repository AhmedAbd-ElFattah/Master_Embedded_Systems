#include <stdio.h>

int main(){
  float arr_1[2][2];
  float arr_2[2][2];
  printf("Enter the elements pf 1st matrix.");
  for (int j=0; j<2; j++){
    for (int k=0; k<2; k++){
      printf("Enter a%d%d \n", j+1, k+1);
      scanf("%f", &arr_1[j][k]);
      }
    }
  
  printf("Enter the elements pf 2st matrix.");
  for (int j=0; j<2; j++){
    for (int k=0; k<2; k++){
      printf("Enter b%d%d \n", j+1, k+1);
      scanf("%f", &arr_2[j][k]);
      }
    }
  
  for (int j=0; j<2; j++){
    for (int k=0; k<2; k++){
      arr_1[j][k] += arr_2[j][k];
      }
    }
  
  printf("Sum Of Matrix: ");
  
  for (int j=0; j<2; j++){
    for (int k=0; k<2; k++){
      printf("%f \n", arr_1[j][k]);
      }
    }
  return 0;
}

