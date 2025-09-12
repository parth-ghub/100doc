#include <stdio.h>

int main(){

    int length, breadth, area, perimeter;

    printf("Enter Length and Breadth:");
    scanf("%d %d", &length, &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("Area:%d , Perimeter:%d",area, perimeter);


    return 0;
}
