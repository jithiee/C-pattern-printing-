//logical operators 
//  && AND ,  || OR   ,  ! NOT , 
// && , if any operators (condition) are false its print 0

#include<stdio.h>
int main(){
    int sum=0;
printf("%d",3>4 && 5>2);  //tow are false its print 0
printf("\n%d",4>6&&5>2); // false 0
printf("\n%d",4>3&&2>5); //false 0
printf("\n%d",4>=4&&4>=4); //true 1

sum=4>=4&&4>=4;
printf("\n%d",sum); //true 1
return 0;
}