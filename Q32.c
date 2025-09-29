//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main(){
    int i,rem,revNum=0,a;
    printf("Enter a number: ");
    scanf("%d", &a);
    i = a;
    for(i; i>0; i/=10){
        rem = i % 10;
        revNum = revNum * 10 + rem;
        
    }
    if (revNum == a)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}