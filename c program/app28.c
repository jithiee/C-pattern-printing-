#include<stdio.h>
int main(){
    int a[5]={5,2,6,8,5},i,sum=0;
    // printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
    // printf("\n%d %d %d %d %d",a[4],a[3],a[2],a[1],a[0]);
    //   easy method in given below
    for(i=0;i<5;i++){
     
        printf("%d ",a[i]);
           sum=sum+a[i];
        

  
  }
    printf("\n");
    for(i=4;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\nsum : %d",sum);
    printf("\n%d",a[0]*a[4]);
    return 0;
}