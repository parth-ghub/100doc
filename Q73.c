//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int n1,n2;
    
    printf("Enter row size: ");
    scanf("%d", &n1);

    printf("Enter column size: ");
    scanf("%d", &n2);

    int matrix[n1][n2];
    
    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            printf("Enter (%d,%d) element: ", i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    int mat[n1];
    for(int i = 0; i <n1; i++){
        int sum = 0;
        for(int j =0; j <n2; j++){
            sum+= matrix[i][j];
        }
        mat[i] = sum;
    }

    for(int i = 0; i<n1; i++){
        printf("%d ", mat[i]);
    }
    return 0;
}