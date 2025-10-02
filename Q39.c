//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int num, product = 1, oddFound = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i=num; i>0; i/=10){
        if ((i%10) % 2 != 0)
        {
            product *= i % 10; 
            oddFound = 1;
        }
    }
    if(oddFound == 0) {
        product = 0; // If no odd digits found, set product to 0
    }
    printf("Product of the odd digits of %d is: %d\n", num, product);
    return 0;
}