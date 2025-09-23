//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main(){
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + (2 * i - 1);
    }
    printf("Sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}