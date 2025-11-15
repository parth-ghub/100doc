//
#include <stdio.h>
int main(){
    int n1,n2,sum = 0;
    
    printf("Enter row size: ");
    scanf("%d", &n1);

    printf("Enter column size: ");
    scanf("%d", &n2);

    int matrix[n1][n2];
    
    for(int i = 1; i <=n1; i++){
        for(int j = 1; j <=n2; j++){
            printf("Enter (%d,%d) element: ", i,j);
            scanf("%d",&matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);
}