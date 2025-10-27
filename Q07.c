//Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main(){
    int a, b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("After swap: %d , %d", b, a);
    return 0;
}