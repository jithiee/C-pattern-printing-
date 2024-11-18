/*print 15 16 -1 0 15
in 1.d array*/
#include<stdio.h>
int main(){
    int a[5],i;
    printf("enter elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<5;i++)
        {
        printf("%d\t",a[i]);
        }
        return 0;
}
