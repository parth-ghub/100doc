//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main(){

    int num;
    float sum = 0.5;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num == 0){
        printf("Sum = 0\n");
        
    }
    else if(num<0){
        printf("Enter a Positive integer.");
    }

    else{
        int a = num;
        int x = 1;
        for(int i=0; i<a; i++){
        
            sum += (float)x/(x+1);
            
            x+=2;
            
        }
    printf("Sum = %f\n", sum);    
}       
    return 0;
}