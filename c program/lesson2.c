#include<stdio.h>
int main(){
    int age;
    float a;
    char b;
    printf("enter age");
    scanf("%d",&age);
    printf("age is %d",age);
    printf("\nenter float vale");
    scanf("%f",&a);
    printf("float value is %f",a);
    printf("\ntotal :%f",age*a);
   
    return 0;
}