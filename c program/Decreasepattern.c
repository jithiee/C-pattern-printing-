// #include<stdio.h>
// int main(){
//     int n=5,i,j;
//     for(i=1;i<=n;i++){
//         for(j=i;j<=n;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
