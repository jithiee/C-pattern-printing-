#include<stdio.h>
int mai(){
    int n=5,i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
