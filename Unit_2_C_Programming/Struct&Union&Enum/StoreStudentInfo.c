#include <stdio.h>
#define STUDENT_NAME_MAXIMIM_LENGTH 100

struct student
{
    char name[STUDENT_NAME_MAXIMIM_LENGTH];
    int roll_number;
    float marks;
};

int main(){

    struct student first_student;
    /*Enter Student Data Section*/
    printf("Enter information of students \n");
    printf("Enter Student Name Please--> \n");

    scanf("%s", first_student.name);
    
    printf("Enter Student Roll Number Please--> \n");
    scanf("%d", &first_student.roll_number);

    printf("Enter Student Marks Please--> \n");
    scanf("%f", &first_student.marks);   

    /*Display Student Data Section*/

    printf("Displaying Information \n");
    printf("Name --> %s \n", first_student.name);
    printf("Roll Number --> %d \n", first_student.roll_number);
    printf("Marks --> %f \n", first_student.marks);
}
