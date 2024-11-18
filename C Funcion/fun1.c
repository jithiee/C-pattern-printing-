#include <stdio.h>
int sum (); // funcion decleraion
int mlt();

void main(){
    sum();  // funcion calling
    mlt();

}
void sum(){  //fumcion defition
   
 int a, b , sum=0;
 printf("Enter two numbres :");
 scanf("%d%d",&a,&b);
 sum=a+b;
printf("sum :%d",sum);
}
void mlt(){    // funcion defnition
    int a, b , mlt=0;
 printf("\nEnter two numbres :");
 scanf("%d%d",&a,&b);
 mlt=a*b;
printf("mlt :%d",mlt);



}
