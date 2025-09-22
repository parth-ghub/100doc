//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main(){
    int seconds, hours, minutes, remSeconds;
    printf("Enter time in seconds:");
    scanf("%d", &seconds);

    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    remSeconds = (seconds%3600)%60;

    printf("Time in HH:MM:SS format is %02d:%02d:%02d", hours, minutes, remSeconds);

    return 0;
}
