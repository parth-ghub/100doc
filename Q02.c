#include <stdio.h>

int main() {

    int num1, num2, sum, diff, product, quotient;

    printf("Enter your numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

     if (num2 == 0) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=undefined (division by zero)\n", 
               sum, diff, product);

    } else {
        quotient = num1 / num2;
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
               sum, diff, product, quotient);
    }

    return 0;
}