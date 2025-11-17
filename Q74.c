//Find the transpose of a matrix.
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
            printf("Enter (%d,%d) element: ", i+1,j+!);
            scanf("%d",&matrix[i][j]);
        }
    }

    int newmatrix[n2][n1];

    for(int i = 0; i <n2; i++){
        for(int j = 0; j < n1; j++){
            newmatrix[i][j] = matrix[j][i];
        }
        print("\n");
    }


      for(int i = 0; i <n2; i++){
        for(int j = 0; j < n1; j++){
            printf("%d ", newmatrix[i][j]);
        }
    }
    
    return 0;
}