//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main(){
    int a;
    printf("Enter the year: ");
    scanf("%d", &a);

    if(a%4 == 0){
        if (a%100==0){
            if(a%400==0){
                printf("%d is a leap year.\n", a);
            } else {
                printf("%d is not a leap year.\n", a);  
        
            }
        }
    }
    else {
        printf("%d is not a leap year.\n", a);    
    }
    return 0;
}