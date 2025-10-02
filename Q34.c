//Write a program to check if a number is prime.
#include <stdio.h>
int main(){
    int num, temp = 1; 
    printf("Enter a number: "); 
    scanf("%d", &num);

    if(num <= 1){
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for(int i = 2; i < num; i++){
        if(num % i == 0){
            printf("%d is not a prime number.\n", num);
            temp = 0;
            break;
        }
    }

    if(temp == 1)
        printf("%d is a prime number.\n", num);

    return 0;
}