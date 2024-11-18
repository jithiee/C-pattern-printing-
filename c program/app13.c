//age 18 prnt adult or print else adult
#include<stdio.h>
int main(){
    int age;
    printf("enter age ");
    scanf("%d",&age);

    if(age>=18){
        printf("adult\n");
    }
    else if(age>13&& age <18){
        printf("teeneger\n");
    }
    else {
        printf("child");
    }

   
    return 0;
}