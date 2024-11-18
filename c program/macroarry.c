#include<stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("enrer the index %d :",i);
        scanf("%d",&a[i]);
    }
    printf("\narray elements are :\n");
        for(i=0;i<10;i++)
        {
             printf("%d\t",&a[i]);

        }
        return 0;
}
