#include<stdio.h>
void sum(void);
void main(){
   sum();
}
void sum()
{
    int a=5,b=6,sum=0;
    sum=a+b;
    printf("sum = %d",sum);
}