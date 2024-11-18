//print E to A in 5 rows
#include<stdio.h>
int main(){
    int n=5,j,i;
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}
