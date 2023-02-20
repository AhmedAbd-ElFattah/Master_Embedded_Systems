#include <stdio.h>

#define STRING_MAX_LENGTH  100

char string[STRING_MAX_LENGTH];

int len = 0;

int main(){
    printf("Input a string : \n");
    scanf("%s", string);

    char *head = string;

    for (int i = 0; i < STRING_MAX_LENGTH;i++){
        if (*head){
            printf("%c", *head);
            head++;
            len++;
        }
        else{
            break;
        }
    }
    printf("\n");
    printf("Reverse of the string is \n");
    while (len--)
    {
        printf("%c", *head);
        head--;
    }
    printf("%c", *head);
    
    printf("\n");
}