/*
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main(){
    int a = 1, b = 17;

    for(int i = 0; i<=8; i++){
        for(int j = 1; j<= (a<b?a:b); j++){
            printf("*");
        }
    a+=2;
    b-=2;
    if(i<8){
    printf("\n");
    }
    }
    return 0;
}