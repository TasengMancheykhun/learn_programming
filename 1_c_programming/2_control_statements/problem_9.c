#include <stdio.h>

void main(){
    int a;
   printf("Enter the week day number: ");
   scanf("%d",&a);

   switch(a){
   case 1:
   
        printf("1-Monday");
         break;
   
    case 2:
   
        printf("2-Tuesday");
        break;
    case 3:
   
        printf("3 -wednsday");
        break;
   case 4:
   
        printf("4 - Thursday");
        break;
    case 5:
   
        printf("5- Friday");
        break;
    case 6:
   
        printf("6 - saturday");
        break;
    case 7:
   
        printf("7 - sunday");
        break;
    default:
        printf("Week day number is Invalid. .   . . .. ");

    

   

   }


}