//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, numDigits, middlePart, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    numDigits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    firstDigit = num / (int)pow(10, numDigits - 1);
    middlePart = (num % (int)pow(10, numDigits - 1)) / 10;

    swappedNum = lastDigit * (int)pow(10, numDigits - 1) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}