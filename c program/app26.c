//?print one student mark in 3 subject maths, english , chemistry and total mark

#include<stdio.h>
int main(){
    int mark[3];
    printf("enter maths  :");
    scanf("%d",&mark[0]);
     printf("enter english  :");
    scanf("%d",&mark[1]);
     printf("enter chemistry  :");
    scanf("%d",&mark[2]);
    printf("mathas mark =%d\nenglish mark =%d\nchemistry mark =%d",mark[0],mark[1],mark[2]);
    printf("\ntotal marh = %d",mark[0]+mark[1]+mark[2]);

    return 0;
 

}