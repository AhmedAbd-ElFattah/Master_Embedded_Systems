#include <stdio.h>
char alphabets[26];

int main(){
    char *ptr = alphabets;

    printf("Print all the alphabets \n");
    for (char i = 0; i<26; i++){
        *ptr = 'A'+i;
        ptr++;
    }

    ptr = alphabets;
    for (char i = 0; i<26; i++){
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");
}