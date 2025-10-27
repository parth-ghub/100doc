//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    float radius, circumference, area;

    printf("Enter Radius:");
    scanf("%f", &radius);
    
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("Area:%.2f , Circumference:%.2f",area, circumference);

    return 0;
}