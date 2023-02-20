#include <stdio.h>
int main(){
    int m = 29;
    int *ab = &m;
    printf("Address of m : %p \n", &m);
    printf("Value of m : %d \n", m);
    printf("\n");
    printf("Now ab is assigned with the address of m\n");
    printf("\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);
    printf("\n");
    m = 34;
    printf("\n");
    printf("The value of m assigned to 34 Now\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);
    printf("\n");
    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 Now\n");
    printf("Address of pointer m : %p \n", &m);
    printf("Content of pointer m : %d \n", m);
}