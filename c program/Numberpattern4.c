#include<stdio.h>
int main(){
    int n=4,i,j,number=0;
    for(i=1;i<=4;i++){
        for(j=0;j<=i;j++){
            number=number+1%2;
            

        
                 if(j%2==1){
                 
                       printf("%d ",number);

                 }else{
                    printf("* ");
                 }
         
                  
        } 
  
        printf("\n");
     
    }
    return 0;
}