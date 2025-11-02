//Count even and odd numbers in an array.
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
    
    int even = 0, odd = 0;
    for(int i = 1; i <=number; i++){
        if(array[i-1]%2==0){
            even ++;
        }
        else{
            odd ++;
        }
    }
    printf("Even :%d Odd: %d", even, odd);
    return 0;
}