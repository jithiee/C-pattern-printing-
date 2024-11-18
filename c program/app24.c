//print all the odd number from 5 to 50  (i %2 != 0)
#include<stdio.h>
int main(){
    int i;
    for(i=5;i<=50;i++){
        if(i %2 != 0){
            printf("%d  ",i);
        }
    }

   
   
    return 0;
}