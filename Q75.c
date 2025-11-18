//Add two matrices
#include <stdio.h>
int main(){
    int n1,n2;
    
    printf("Enter row size of both the matrices: ");
    scanf("%d", &n1);

    printf("Enter column size of both the matrices: ");
    scanf("%d", &n2);

    int matrix1[n1][n2], matrix2[n1][n2];
    
    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            printf("Enter (%d,%d) element of the 1st matrix: ", i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            printf("Enter (%d,%d) element of the 2nd matrix: ", i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    int sumMatrix[n1][n2];
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }

    }

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            printf("%d",sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}