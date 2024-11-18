// #include<stdio.h>
// int main(){
//     int n=5,i,j;
//     for(i=1;i<=5;i++){
//         for(j=i;j>=1;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// } 
      //OR
#include<stdio.h>
 int main(){
    int n=5,i,j;
    for(i=0;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0; 
 }
