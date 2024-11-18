//read to array of size 5 and sum these arrays into third array .?
//1d array
#include<stdio.h>
int main(){
    int array1[5],array2[5],sumarray[5],i;
    printf("enter 5 elements");
    for(i=0;i<5;i++){
    scanf("%d%d",&array1[i],&array2[i]);

        }
    for(i=0;i<5;i++){
               
     sumarray[i]=array1[i]+array2[i];
     
         printf("\n%d ",sumarray[i]);

         
            }
      
  
          
            return 0;

}  
