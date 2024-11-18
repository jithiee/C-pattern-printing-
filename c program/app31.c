//elements taken from user

#include<stdio.h>
int main(){
    int a[5], i;
    printf("enter elemens");
 for(i=0;i<5;i++){
     scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
     printf("%d ",a[i]);
}
// revers print
printf("\n");
for(i=4;i>=0;i--){
     printf("%d ",a[i]);
}



return 0;
}