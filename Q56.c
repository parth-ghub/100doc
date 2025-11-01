//Read and print elements of a one-dimensional array.
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

    for(int i = 1; i <= number; i++){
        printf("%d ", array[i-1]);
    }
    return 0;
}