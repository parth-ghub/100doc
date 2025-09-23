//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int factorial = 1;
    for(int i = n; i >= 1; i--){
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}
