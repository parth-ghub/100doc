//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for(int i = (num1>num2?num1:num2); i<=num1*num2; i++){
        if(i%num1==0 && i%num2==0){
            printf("LCM of %d and %d is: %d\n", num1, num2, i);
            break;
        }
    }

    return 0;
}