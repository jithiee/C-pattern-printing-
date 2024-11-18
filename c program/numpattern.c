//1 to 5 each row
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}