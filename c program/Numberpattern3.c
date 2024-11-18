#include<stdio.h>
int main(){
    int n=4,i,j,number=0;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            number=number+1;
            printf("%d ",number);
        }
        printf("\n");
    }
    return 0;
}