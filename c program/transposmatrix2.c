#include<stdio.h>
int main(){
    int a[2][3],b[3][2],i,j;
    printf("enter elements ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("matrix  :\n");
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
      b[j][i]=a[i][j];

        }
        printf("\n");
    }
    printf("transpose matrix :\n" );
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
      printf("%d ",b[i][j]);

        }
        printf("\n");
    }
    return 0;





}