#include <stdio.h>
#define AREA(r) (3.14*r*r)

int main(){
    float circle_radius;
    float circle_area;
    printf("Enter the raduis --> \n");
    scanf("%f", &circle_radius);
    circle_area = AREA(circle_radius);
    printf("Area is %.2f \n", circle_area);
}
