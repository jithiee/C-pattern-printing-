//print the sum of n natural numbers supose n=4 the sum is 1+2+3+4 =10
//also print them revers.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
        printf("%d",i);
    
    }
    printf("\n");
    for(i=n;i>=1;i--){
    printf("%d",i);
    }
        printf("\nsum = %d",sum);
    return 0;
}