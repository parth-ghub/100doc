/*
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    printf("Enter number of days late:");
    if(days<=5){
        printf("Fine: ₹%d",days*2);
    }
    else if(days<=10){
        printf("Fine: ₹%d",5*2+(days-5)*4);
    }
    else if(days<=30){
        printf("Fine: ₹%d",5*2+5*4+(days-10)*6);
    }
    else{
        printf("Membership Cancelled");
    }