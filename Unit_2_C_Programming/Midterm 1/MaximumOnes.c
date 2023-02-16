#include <stdio.h>
#include <string.h>

#define	GET_BIT(VAR, BIT_NUMBER) ((VAR>>BIT_NUMBER) & 0x01)
int MaxNumberOfOnesBetweenTwoZeros(int number){
    /*Assuming int is 4 bytes*/
    #define MAX_INT_BIT 31
    int result = 0;
    int counter = 0;
    int First_LSB_Zero=0;
    for (int i = 0; i<MAX_INT_BIT; i++){
        if (GET_BIT(number, i)==0){
            /*Find LSB which have zero value
            * for example if x = 0b001101111
            * our summation must be start with bit number 4 
            * as otherbits have 1 bit and not consecative with another 0 bits
            * in other words consecative with only one bit not from both sides of it.
            */
            First_LSB_Zero = i;
            break;
        } 
    }
    for (int i = First_LSB_Zero; i<MAX_INT_BIT; i++){
        if (GET_BIT(number, i)){
            counter++;
        }
        else{
            if (counter > result){
                result = counter;
            }
            counter = 0;
        }
    }
    return result;
}
int main(){
    printf("Test case 1 Input is 14 Maximum Number of ones between two zeros %d \n", MaxNumberOfOnesBetweenTwoZeros(14));
    printf("Test case 2 Input is 110 Maximum Number of ones between two zeros %d \n", MaxNumberOfOnesBetweenTwoZeros(110));
    printf("Test case 3 --> %d \n", MaxNumberOfOnesBetweenTwoZeros(0b01011011111));
}