//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>   

int main(){
    float a,b,c,root1,root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);  


    root1 = -b + sqrt(b*b - 4*a*c) / (2*a);
    root2 = -b - sqrt(b*b - 4*a*c) / (2*a);
    if (b*b - 4*a*c > 0){
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    } else if (b*b - 4*a*c == 0){
        printf("Roots are real and same.\n");
        printf("Root = %.2f\n", root1);
    } else {
        printf("Roots are complex and different.\n");
    }
    return 0;
}