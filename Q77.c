//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n1,n2;
    
    printf("Enter row size: ");
    scanf("%d", &n1);

    printf("Enter column size: ");
    scanf("%d", &n2);

    if(n1!=n2){
        printf("Matrices cant have diagonals if number of rows isnt equal to number of columns!");
    }
    else{
    int matrix[n1][n2];
    
    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            printf("Enter (%d,%d) element: ", i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    bool isDistinct = true;

    for(int i = 0; i <n1; i++){
        for(int j = 0; j <n2; j++){
            if(j==i){
                continue;
            }
            
            if(matrix[i][i]==matrix[j][j]){
            isDistinct = false;
            break;
            }
        }
        if(!isDistinct){
            break;
        }
    }

if(isDistinct){
    printf("True");
    }
    else{
    printf("False");
}
}

    
    
    return 0;
}