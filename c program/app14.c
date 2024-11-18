//switch
#include<stdio.h>
int main(){
    int day; //1mon,2tuse,3wed
    printf("enter day 1-7 :");
    scanf("%d",&day);

    switch(day){
      case 1 : printf("monday");
                      break;
      case 2 : printf("tuesday"); 
        break;
      case 3 : printf("wednesday");
        break;
      case 4 : printf("thurnday");
        break;
      case 5 : printf("friday");
              break;
      case 6 : printf("aaterday");
              break;
      case 7 : printf("sunday");
      default: printf("not a valid day");
}
return 0;
}
