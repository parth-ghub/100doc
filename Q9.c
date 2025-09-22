//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main(){
    float principal, rate, time, simpInt, compInt;
    printf("Enter principal, rate and time:");
    scanf("%f %f %f", &principal, &rate, &time);
    simpInt = (principal * rate * time)/100;
    compInt = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Simple Interest : %.2f\nCompound Interest : %.2f", simpInt, compInt);
    return 0;   
}