//write a program to enter price of 3 items & print final cost with gst.? and total gst?
#include<stdio.h>
int main(){
    float price[3];
    printf("enter produt 1 price :");
    scanf("%f",&price[0]);
     printf("enter produt 2 price :");
    scanf("%f",&price[1]);
 printf("enter produt 3 price :");
    scanf("%f",&price[2]);
 printf("produt 1 gst :%f\nprodut 2 gst :%f\nprodut 3 gst :%f",price[0]+(0.18*price[0]),price[1]+(0.18*price[1]),price[2]+(0.18*price[2]));
 printf("\ntotal gst  :%f",(0.18*price[0])+(0.18*price[1])+(0.18*price[2]));



return 0;
}
