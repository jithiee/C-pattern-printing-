#include<stdio.h>
int main(){
    int n=5,j,i;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}