// print the number 0 to n if n is given by user
#include<stdio.h>
int main(){
    int n,i;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}