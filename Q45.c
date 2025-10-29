//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int a = 2, b = 3;
    float sum = 0;
    for (int i = 0; i <num; i++){
        sum += (float)a / b;
        a += 2;
        b += 4; 
    }
    printf("Sum = %f\n", sum);
    return 0;
}