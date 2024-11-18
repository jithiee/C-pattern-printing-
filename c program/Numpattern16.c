#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
