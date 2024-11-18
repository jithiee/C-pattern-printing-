//check number positve or negative
#include<stdio.h>
int main(){
    int number;
    printf("enter a number");
    scanf("%d",&number);
    if(number>0){
        printf("positive");
   if(number%2==0){
        printf("\neven number");
   
    }else {
        printf("\nodd number");
        
    }
    else {
    printf("negative");
    }
return 0;
}