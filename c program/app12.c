//condition statemet 
//if else ,  switch
//? mark of students mark 80 to 90 print A+

#include<stdio.h>
int main(){
 int mark;
printf("enter mark");
scanf("%d",&mark);
if(mark>=80 && mark>=90){
    printf("A+");
}else{
    printf("not bad");
}
return 0;

    

}