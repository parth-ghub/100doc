//Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
    int num, digits=0,sum=0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    int a = num;
    while(a!=0){
        a = a/10;
        digits++;
    }
    int b = num;
    for(int i=0; i<digits; i++){
        
        int x = b % 10;

        int multiply = 1;
        while(x>1){
        
        multiply = multiply * x;
        x = x - 1;
        }

        sum = sum + multiply;

        b /= 10;
    }
    if (sum == num){
        printf("The number %d is a strong number.\n", num);
    }
    else{
        printf("The number %d is not a strong number.\n", num);
    }

    return 0;
}