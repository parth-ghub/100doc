//Search for an element in an array using linear search.
#include <stdio.h>

int search(int arr[], int num, int n){
        for(int i = 1; i <= n; i++){
            if(arr[i-1] == num){
                return i;
            }
        }
        return -1;
}

int main(){
    int n,num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    
        printf("Enter the number to search: ");
        scanf("%d", &num);
        int result = search(arr, num, n);
        if(result != -1){
            printf("Element found at index %d\n", result);
        } else {
            printf("%d",result);
        }
    return 0;
}












