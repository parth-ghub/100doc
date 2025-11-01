//
#include <stdio.h>
int main(){
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);
    int array[number];

    for(int i = 1; i <= number; i++){
        int tempnum;
        printf("Enter number %d: ", i);
        scanf("%d", &tempnum);
        array[i-1] = tempnum;
    }

    int sum = 0;

    for(int i = 1; i <= number; i++){
        sum += array[i-1];
    }
    printf("Sum: %d\n", sum);
    return 0;
}