#include <stdio.h>

void main(){
    int a;
   printf("Enter the month number: ");
   scanf("%d",&a);

   switch(a){
   case 1:
   
        printf("1-January");
         break;
   
    case 2:
   
        printf("2-February");
        break;
    case 3:
   
        printf("3 -March");
        break;
   case 4:
   
        printf("4 - April");
        break;
    case 5:
   
        printf("5- May");
        break;
    case 6:
   
        printf("6 - June");
        break;
    case 7:
   
        printf("7- July");
        break;
    case 8:
   
        printf("8 - August");
        break;
    case 9:
   
        printf("9 -September");
        break;
    case 10:
   
        printf("10 - October");
        break;
    case 11:
   
        printf("11 - November");
        break;
    case 12:
   
        printf("12 - December");
        break;
    default:
        printf("Month number is Invalid. .   . . .. ");

   }


}