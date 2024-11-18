//write a program to calculate area of a circle (pir2   )   pi*radius2 [2 means square]
#include<stdio.h>
int main(){
    
    float radius, pi=3.14;
    printf("enter radius of circle  :");
    scanf("%f",&radius);
    printf("area of circle = %f",pi*radius*radius);
    return 0;
}