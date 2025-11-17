//Add two matrices
#include <stdio.h>
int main(){
    int n1,n2;
    
    printf("Enter row size of first matrix: ");
    scanf("%d", &n1);

    printf("Enter column size of first matrix: ");
    scanf("%d", &n2);

    printf("Enter row size of second matrix: ");
    scanf("%d", &n3);

    printf("Enter column size of second matrix: ");
    scanf("%d", &n4);

    int matrix1[n1][n2], matrix2[n3][n4];
    
    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            printf("Enter (%d,%d) element of the 1st matrix: ", i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for(int i = 0; i <n3; i++){
        for(int j = 0; j <n4; j++){
            printf("Enter (%d,%d) element of the 2nd matrix: ", i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    return 0;
}