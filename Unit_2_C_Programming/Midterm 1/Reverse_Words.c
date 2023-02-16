#include <stdio.h>
#include <string.h>
#define STACK_MAX_CAPACITY 100
/*Implement simple stack to facilate the processing*/
int stack_top = -1;
char simpleStack[STACK_MAX_CAPACITY];
void push(char element){
    stack_top++;
    if (stack_top >= STACK_MAX_CAPACITY){
        /*No operation*/
    }
    else{
    simpleStack[stack_top] = element;
    }
}
char pop(void){
    if (stack_top > -1){
        char output_val = simpleStack[stack_top];
        stack_top--;
        return output_val;
    }
    return -1;
}
void reverse_word(char *sentence){
    int sentence_length = strlen(sentence);
    for (int i = sentence_length-1; i> -1; i--){
        if (i==0){push(sentence[i]);}
        if ((' ' != sentence[i] ) && (0 != i)){
            push(sentence[i]);
        }
        else{
            while(-1 != stack_top)
                printf("%c", pop());
            printf(" ");
        }
    }
}
int main(){
    reverse_word("mohamed gamal");
    printf("\n");
}