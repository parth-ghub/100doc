//Find the maximum and minimum element in an array.
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
    int temp = array[0];
    for(int i = 1; i < number; i++){
        if(array[i]>temp){
            temp = array[i];
        }
    }
    printf("Max: %d\n", temp);


    int smallest = array[0];
    for(int i = 1; i < number; i++){
        if(array[i]<smallest){
            smallest = array[i];
        }
    }
    printf("Min: %d", smallest);
    return 0;
}