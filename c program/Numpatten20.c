#include<stdio.h>
int main(){
    int n=5,j,i;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}