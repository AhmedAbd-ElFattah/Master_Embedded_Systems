#include <stdio.h>

struct distance
{
    int feet;
    float inch;
};

int main(){

    struct distance distance_1, distance_2, distance_sum;
    /*Enter First distance data section.*/
    printf("Enter information for 1st distance \n");
    printf("Enter Feet --> \n");
    scanf("%d", &distance_1.feet);
    printf("Enter Inch --> \n");
    scanf("%f", &distance_1.inch);

    /*Enter Second distance data section.*/
    printf("Enter information for 2nd distance \n");
    printf("Enter Feet --> \n");
    scanf("%d", &distance_2.feet);
    printf("Enter Inch --> \n");
    scanf("%f", &distance_2.inch);

    /*Display Summation distance data section.*/
    distance_sum.feet = distance_1.feet + distance_2.feet;
    distance_sum.inch = distance_1.inch + distance_2.inch;
    
    while (distance_sum.inch > 12.0){
        distance_sum.inch -= 12.0;
        distance_sum.feet++;
    }

    printf("Summation of distances = %d Feet , %f inch \n", 
    distance_sum.feet,distance_sum.inch);

}
