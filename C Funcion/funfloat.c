#include <stdio.h>
float sum();
void main(){
    sum();
}
float sum(){
    float a,b,sum=0;
    printf("enter two number :");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum = %f\n",sum);

}