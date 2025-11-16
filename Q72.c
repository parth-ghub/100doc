//Find the sum of all elements in a matrix.
#include <stdio.h>
int main(){
    int n1,n2,sum = 0;
    
    printf("Enter row size: ");
    scanf("%d", &n1);

    printf("Enter column size: ");
    scanf("%d", &n2);

    int matrix[n1][n2];
    
    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            printf("Enter (%d,%d) element: ", i+1,j+1);
            scanf("%d",&matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);
}