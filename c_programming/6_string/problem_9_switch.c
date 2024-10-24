#include <stdio.h>
#include <string.h>

void main(){

  char str1[30], str2[20];

  int cp=0,len1=0,len2=0,choice=0,cn=0;

  do{
     printf("1. string length\n");
     printf("2. string compare\n");
     printf("3. string copy\n");
     printf("4. string concatenate\n");
     printf("ENTER THE CHOICE : \n");
     scanf("%d",&choice);
     switch(choice){
     case 1:
            printf("Enter string: \n");
            scanf("%s",str1);
            len1=strlen(str1);
            printf("The length of string is: %d\n",len1);
            break;
     case 2:
            printf("Enter 1st string: \n");
            scanf("%s",str1);

            printf("Enter 2nd string: \n");
            scanf("%s",str2);
            cp=strcmp(str1,str2);
            if (cp==0){
                printf("1st String %s and 2nd string %s are equal\n",str1,str2);
            }
            else if (cp<0){
                printf("1st String %s is less than 2nd string %s\n",str1,str2);
            }
            else{
                printf("1st String %s is greater than 2nd string %s\n",str1,str2);
            }
            break;
     case 3:
            printf("Enter 1st string: \n");
            scanf("%s",str1);

            printf("Enter 2nd string: \n");
            scanf("%s",str2);
  
            strcpy(str1,str2);

            printf("After copy of 2nd string to 1st string: %s\n",str1);
            break;

     case 4:
            printf("Enter 1st string: \n");
            scanf("%s",str1);

            printf("Enter 2nd string: \n");
            scanf("%s",str2);

            strcat(str1,str2);
            printf("The concatenate string is %s \n",str1);
            break;
     default:
            printf("Please enter correct choice......");
  
}
printf("Are you want to continue? (press 1 for cont./ 0 for STOP.\n");
scanf("%d",&cn);
}while (cn==1);

}