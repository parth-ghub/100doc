//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main(){
    int a,sum;
    printf("Write a number:");
    scanf("%d", &a);

    sum = (1+a)/2 * a;
    printf("The sum of first %d natural numbers is %d", a, sum);

    return 0;
}