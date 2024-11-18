//logical operators  || OR
//anyone  condition is true print 1
//both are false print 0
#include<stdio.h>
int main(){
    printf("%d",3>4||5>2); //two condition are true print 1
    printf("\n%d",3>3||2>4); //two flase 0
    printf("\n%d",4>=4||3>5); //true 1
    return 0;
}