#include <stdio.h>

typedef struct Complex
{
    float real;
    float imaginary;
}Complex;

Complex add_2ComplexNumbers(Complex *num_1, Complex *num_2){
    Complex Summation;
    Summation.real = num_1->real + num_2->real;
    Summation.imaginary = num_1->imaginary + num_2->imaginary;
    return Summation;
}

int main(){

    struct Complex Complex_num1, Complex_num2, Complex_numSum;
    /*Enter First distance data section.*/
    printf("Enter First number \n");
    printf("Enter Real Number --> \n");
    scanf("%f", &Complex_num1.real);

    printf("Enter Imaginary Number --> \n");
    scanf("%f", &Complex_num1.imaginary);

    /*Enter Second distance data section.*/
    printf("Enter Second number \n");
    printf("Enter Real Number --> \n");
    scanf("%f", &Complex_num2.real);

    printf("Enter Imaginary Number --> \n");
    scanf("%f", &Complex_num2.imaginary);

    Complex_numSum = add_2ComplexNumbers(&Complex_num1, &Complex_num2);
    printf("\n \n Summation is %f + %f i \n", Complex_numSum.real, Complex_numSum.imaginary);
}