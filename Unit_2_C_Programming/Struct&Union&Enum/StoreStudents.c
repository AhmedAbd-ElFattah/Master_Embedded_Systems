#include <stdio.h>
#define NUMBER_OF_STUDENTS  3

#define STUDENT_NAME_MAXIMIM_LENGTH 100

struct student
{
    char name[STUDENT_NAME_MAXIMIM_LENGTH];
    int roll_number;
    float marks;
};


struct student students[NUMBER_OF_STUDENTS];
int main(){
    printf("Enter information of students \n");
    for (int i = 0; i<NUMBER_OF_STUDENTS; i++){
    printf("\n ------------------------- \n");
    /*Enter Student Data Section*/
    printf("Enter Student %d Name Please--> \n", i+1);

    scanf("%s", students[i].name);
    
    printf("Enter Student %d Roll Number Please--> \n", i+1);
    scanf("%d", &students[i].roll_number);

    printf("Enter Student %d Marks Please--> \n", i+1);
    scanf("%f", &students[i].marks);
    printf("\n ------------------------- \n");  
    }


    /*Display Student Data Section*/
    printf("Displaying Information \n");
    for (int i = 0; i<NUMBER_OF_STUDENTS; i++){
        printf("\n ------------------------- \n");
        printf("Student %d Name --> %s \n", i+1, students[i].name);
        printf("Student %d Roll Number --> %d \n", i, students[i].roll_number);
        printf("Student %d Marks --> %f \n", i+1, students[i].marks);
        printf("\n ------------------------- \n");
    }

}
