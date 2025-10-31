/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main(){
    int a = 1, b = 9;
    for(int i = 0; i < 5; i++){
        

        for(int j = 1; j <= (a<b?a:b); j++){
            printf("*\n");
        }
    if(i<4){
    printf("\n");
    }
    a+=2, b-=2;
    }

    return 0;
}