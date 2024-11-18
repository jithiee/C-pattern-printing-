//2d array
#include<stdio.h>
int main(){
    int a[2][3],i,j,sum=0;
    printf("enter elements :");

 for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
 }
 printf("metrix is :\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
    printf("%d\t",a[i][j]);
    sum=sum+a[i][j];
    }
    printf("\n");
 }
printf("\nsum =%d",sum);

    return 0;
}