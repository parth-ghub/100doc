//Check if a matrix is symmetric.
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

    int isSymmetric = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = 0;
                break;
            }
        }
    }

    if(isSymmetric){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}