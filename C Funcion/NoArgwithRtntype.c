#include<stdio.h>
int sum();
void main()
{
    int s;
    s=sum();
    printf("sum = %d",s);

}
int sum()
{
   int a=5,b=6,sum=0;
   sum=a+b;
   //return a+b;
   //return sum,a,b;
   return sum;


}