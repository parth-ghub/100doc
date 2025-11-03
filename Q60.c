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
    
    int positive = 0, negative = 0, zero = 0;
    for(int i = 1; i <=number; i++){
        if(array[i-1]>0){
            positive++;
        }
        else if(array[i-1]<0){
            negative++;
        }
        else{
            zero++;
        }
        
    }
    printf("Positive :%d Negative: %d Zeros: %d", positive, negative, zero);
    return 0;
}