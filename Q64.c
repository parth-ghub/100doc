//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int digits = 0, temp = num;
    while(temp != 0){
        digits++;
        temp = temp / 10;
    }
    int arr[digits];

    temp = num;
    for(int i = 0; i < digits; i++){
        arr[i] = temp % 10;
        temp = temp / 10;
    }
    int maxCount = 0, digit=arr[0];
    for(int i = 0; i < digits; i++){
        int count = 1;
        for(int j = i + 1; j < digits; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    if(count > maxCount){
        maxCount = count;
        digit = arr[i];
        }
    else if( count == maxCount){
        if(arr[i] < digit){
            digit = arr[i];
        }    
    }
}
    printf("%d", digit);
    return 0;
}