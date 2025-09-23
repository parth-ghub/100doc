//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int num1,num2;
    char op;
    printf("Enter your numbers and operator(+,-,*,/,%%): ");
    scanf("%d %d %c",&num1,&num2,&op);
    switch(op){
        case '+':
            printf("Sum=%d\n",num1+num2);
            break;
        case '-':
            printf("Diff=%d\n",num1-num2);
            break;
        case '*':
            printf("Product=%d\n",num1*num2);
            break;
        case '/':
            if(num2==0){
                printf("Quotient=undefined (division by zero)\n");
            }
            else{
                printf("Quotient=%d\n",num1/num2);
            }
            break;
        case '%':
            if(num2==0){
                printf("Remainder=undefined (division by zero)\n");
            }
            else{
                printf("Remainder=%d\n",num1%num2);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}