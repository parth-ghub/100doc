//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main(){
    int n;
    
    printf("Enter row and column size: ");
    scanf("%d", &n);

    int matrix[n][n];
    
    for(int i = 0; i <n; i++){
        for(int j = 0; j <n; j++){
            printf("Enter (%d,%d) element: ", i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
    sum += matrix[i][i];
    }
    printf("%d", sum);
    
    return 0;
}