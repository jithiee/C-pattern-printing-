//mark >30 is pass   mark <=30 is fail mark >=0 is wrong mark
#include<stdio.h>
int main(){
    int mark;
    printf("enter mark ");
    scanf("%d",&mark);
    if(mark>=30 && mark<=100 ){
        printf("pass");
    }else if(mark>=0 && mark<=30){
        printf("fail");
    }else {
        printf("wrong mark");
    }
    return 0;


    }