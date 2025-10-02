//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
    int num, sum=0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    for(int i=temp; i>0; i/=10){
        sum += i % 10;
    }
    printf("Sum of digits of %d is: %d\n", num, sum);
    
    return 0;
}