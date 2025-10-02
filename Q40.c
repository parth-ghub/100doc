//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int a = num;
    int newNum = 0;
    while(a>0){
        int digit = a % 10;
        int newDig = 1 - digit;
        newNum = newNum * 10 + newDig;
        a /= 10;
    }

    int reversedNum = 0;
    while(newNum>0){
        int digit = newNum % 10;
        reversedNum = reversedNum * 10 + digit;
        newNum /= 10;
    }
    printf("The 1's complement of %d is: ", reversedNum);
    return 0;
}