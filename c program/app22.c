// print the table of a number input by the user 
//n=2     2  4  6  8  10  12  14.....etc like that    // table means gunanapattika
#include<stdio.h>
int main(){
    int n,i;
    printf("enter number  ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    
    printf("%d\n",n*i);
    }
     
    
    return 0;

}