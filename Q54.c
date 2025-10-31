/*
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main(){
    int a = 1, b = 13;
    for(int i = 1; i < 8; i++){
        for(int j = 1; j<= (7-(a<b?a:b))/2;j++ ){
            printf(" ");
        }
    
        for(int k = 1; k <= (a<b?a:b); k++){
            printf("*");
        }
        for(int l = 1; l<= (7-(a<b?a:b))/2;l++ ){
            printf(" ");
        }


        a +=2; b -=2;
        if(i<7){
            printf("\n");
        }
    }
}