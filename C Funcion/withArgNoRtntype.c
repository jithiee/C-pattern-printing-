#include <stdio.h>
void sum(float,float);
void main ()
{
sum (2.1,3.5);

}
void sum(float x , float y)
{
    float sum=0;
    sum=x+y;
    printf("sum=%f",sum);

}