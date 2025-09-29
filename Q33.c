//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main(){
    int num,sum=0,i,rem,temp,digits=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0){
        temp /= 10;
        digits++;
    }

    for(i=num; i>0; i/=10){
        rem = i % 10;
        int a =1;
        for(int j=1; j<=digits; j++){
        a *= rem;
        }
        sum += a;
        
    }
    if (sum == num)
        printf("Armstrong number");
    else

        printf("Not an Armstrong number");
    return 0;
    
}