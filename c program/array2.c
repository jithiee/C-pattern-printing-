/*(initilization) print  15  16   -1  0   5 and  print in revers order like  5  0  -1  16  15 */
#include<stdio.h>
int main(){
    int a[5]={15,16,-1,0,5},i;
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=4;i>=0;i--){
        printf("%d\t",a[i]);
    }
     return 0;


}
