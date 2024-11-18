//read an array of 10 integer and cout total number of even and odd elements ?
#include<stdio.h>
int main(){
    int a[10],i,even=0,odd=0;
    
    printf("enter elements ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<10;i++){
        if(a[i]%2==0){
      even=even+1;
        }else{
            odd=odd+1;
        }
       
     }
      printf("even elements are : %d",even);
        printf("\nodd elements are : %d",odd);
    return 0;
}


