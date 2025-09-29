//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int num, revNum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    
    for(i; num > 0; num /= 2) {
        i = num % 2;
        revNum = revNum * 10 + i;
    }

    while (revNum > 0) {
        i = revNum % 10;
        printf("%d", i);
        revNum /= 10;
    }


        
    return 0;
}
WILL DO LATER WITH ARRAYS