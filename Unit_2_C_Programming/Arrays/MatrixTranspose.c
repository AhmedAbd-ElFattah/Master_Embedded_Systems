#include <stdio.h>
#define SQUARE_MATRIX_DIMS  2

int matrix[SQUARE_MATRIX_DIMS][SQUARE_MATRIX_DIMS];
int matrix_transpose[SQUARE_MATRIX_DIMS][SQUARE_MATRIX_DIMS];
int main(){
  int element;
  /*Enter Matrix elements.*/
  for (int rows = 0; rows<SQUARE_MATRIX_DIMS;rows++){
    for  (int cols = 0; cols<SQUARE_MATRIX_DIMS;cols++){
    printf("Enter Element of Row %d COl %d --> ", rows, cols);
    scanf("%d", &element);
    matrix[rows][cols] = element;
    matrix_transpose[cols][rows] = element;
    }
  }
  /*Print Entered Matrix*/
  printf("Entered Matrix \n");
  for (int rows = 0; rows<SQUARE_MATRIX_DIMS;rows++){
    for  (int cols = 0; cols<SQUARE_MATRIX_DIMS;cols++){
    printf("%d ", matrix[rows][cols]);
    }
    printf("\n");
  }
  printf("------------------------------------\n");
  
  /*Print Entered Matrix*/
  printf("Transposed Matrix \n");
  for (int rows = 0; rows<SQUARE_MATRIX_DIMS;rows++){
    for  (int cols = 0; cols<SQUARE_MATRIX_DIMS;cols++){
    printf("%d ", matrix_transpose[rows][cols]);
    }
    printf("\n");
  }
  printf("------------------------------------\n");
  return 0;
}
