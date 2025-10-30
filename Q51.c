/*
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>
int main(){
    for(int i=0; i<5; i++){
        for(int j=4; j>i; j--){
            printf(" ");
            }

        for(int k=5-i; k<=5; k++){
        printf("%d",k );
        }
    
    printf("\n");
    }
}