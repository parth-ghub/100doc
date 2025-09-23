//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main(){

    float a,b,c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b){
    
        if(a==b && b==c){
            printf("Equilateral Triangle");
        }
        else if(a==b || b==c || c==a){
            printf("Isosceles Triangle");
        }
        else{
            printf("Scalene Triangle");
        }
    }
    else{
        printf("Triangle is not valid");
    }

    return 0;
}
