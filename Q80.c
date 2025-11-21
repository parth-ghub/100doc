//Multiply two matrices.
#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Enter number of rows of the 1st matrix: ");
    scanf("%d",&n1);

    printf("Enter number of columns of the 1st matrix and number of rows of the 2nd matrix: ");
    scanf("%d",&n2);

    printf("Enter number of columns of the 2nd matrix: ");
    scanf("%d",&n3);
    
    int matrix1[n1][n2] , matrix2[n2][n3];

    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            printf("Enter (%d,%d) element of the 1st matrix: ", i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for(int i = 0; i <n2; i++){
        for(int j = 0; j <n3; j++){
            printf("Enter (%d,%d) element of the 2nd matrix: ", i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    int multMatrix[n1][n3];
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            multMatrix[i][j] = 0;
            for(int k = 0; k < n2; k++) {
                multMatrix[i][j] += matrix1[i][k] * matrix2[k][j];;
          }    
            
        }
    }

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            printf("%d ", multMatrix[i][j]);

        }
        printf("\n");
    }
    
    return 0;
}