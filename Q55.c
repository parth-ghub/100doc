//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <=num; i++){
        int isprime = 1;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                isprime = 0;
                break;
            }
                      
    }
        if(isprime){
            
         printf("%d ", i);}
    }
    return 0;
}