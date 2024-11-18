// print 5 to 1
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}