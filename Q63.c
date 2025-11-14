//Merge two arrays.
#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], arr3[n1+n2];

    printf("Enter elements of first array:\n");
    for(int i=0; i<n1; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for(int i=0; i<n2; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr2[i]);
    }


    for(int i=0; i<n1; i++){
        arr3[i] = arr1[i];
    }
    for(int i=0; i<n2; i++){
        arr3[n1 + i] = arr2[i];
    }

    for(int i=0; i<n1+n2; i++){
            printf("%d ", arr3[i]);
    }

    return 0;
}