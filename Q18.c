/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

#include <stdio.h>
int main(){
    int perc;
    printf("Enter percentage: ");
    scanf("%d", &perc);
    if(perc < 60 && perc >= 0){
        printf("Grade F\n");
    }
    else if(perc < 70){
        printf("Grade D\n");
    }
    else if(perc < 80){
        printf("Grade C\n");
    }
    else if(perc < 90){
        printf("Grade B\n");
    }
    else if(perc <= 100){
        printf("Grade A\n");
    }
    else{
        printf("Invalid percentage\n");
    }
    return 0;
}