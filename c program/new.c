#include<stdio.h>
int main(){
    int n=5,j,i,num=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            num=num+1;
           if(num%2==0)
           printf("1\3");
           else 
           printf("u");
        }
        printf("\n");
    }
    return 0;
}
