//marks of 5 student calculate sum and average using array 
//sum , average
#include<stdio.h>
int main(){
    int mark[5],i,sum=0;
    float average=0;
    printf("enter marks ");
    for(i=0;i<5;i++){
        scanf("%d",&mark[i]);
        sum=sum+mark[i];
         average=sum/5;
            }
        for(i=0;i<5;i++){
     printf("%d ",mark[i]);
    
        }
        printf("\nsum :%d",sum);
        printf("\naverage :%f",average);
  
 return 0;


}