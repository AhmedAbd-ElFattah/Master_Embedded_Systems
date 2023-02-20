#include <stdio.h>

int array[]={10, 20, 30, 40, 50, 60 ,70 ,80 ,90 ,100};

int len = 0;

int main(){
    int *head = array;

    for (int i = 0; i < sizeof(array)/sizeof(array[0]);i++){
        if (*head){
            printf("%d ", *head);
            head++;
            len++;
        }
        else{
            break;
        }
    }
    printf("\n");
    printf("Reverse of the Array is \n");
    head--;
    while (len--)
    {
        printf("%d ", *head);
        head--;
    }
    
    printf("\n");
}