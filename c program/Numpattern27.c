#include<stdio.h>
int main(){
    int n=5,j,i,num=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            num=num+1;
           if(num%2==0)
           printf("0");
           else 
           printf("1");
        }
        printf("\n");
    }
    return 0;
}