#include<stdio.h>
int main(){
    int a[2][3],i,j;
    printf("enter elements :");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("metrix is \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        
     printf("\n");
    }
      
  
    return 0;
}