//Write a program to reverse a given number.

#include <stdio.h>
int main(){
    int n,a,number;
    printf("Enter a number: ");
    scanf("%d", &n);
    number = 0;
    while(n!=0){
        a = n % 10;
        number = number * 10 + a;

        n /= 10;
    }
printf("Reversed Number: %d\n", number);
    return 0;
}