//Reverse an array without taking extra space.
#include <stdio.h>
int main(){
int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    for(int i = 0; i < n; i++){
        if(i != n-1)
            printf("%d ", arr[i]);
        else
            printf("%d", arr[i]);
    }
    return 0;
}