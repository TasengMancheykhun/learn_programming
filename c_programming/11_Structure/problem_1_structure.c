#include <stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks[5];
    float total,avg;
};


int main(){
   
   struct student s1;

   printf("Enter roll no. of student: \n");
   scanf("%d",&s1.rollno);
   
   printf("Enter name of student: \n");
   scanf("%s",s1.name);

   printf("Enter mark of subject 1: \n");
   scanf("%f",&s1.marks[0]);

   printf("Enter mark of subject 2: \n");
   scanf("%f",&s1.marks[1]);

   printf("Enter mark of subject 3: \n");
   scanf("%f",&s1.marks[2]);
 


   printf("Student Roll no: %d \n",s1.rollno);
   printf("Student name: %s \n",s1.name);

   s1.total = s1.marks[0] + s1.marks[1]+ s1.marks[2];
   s1.avg = s1.total/3.0;
 
   printf("Total marks obtained: %f\n",s1.total);

   printf("Average is: %f\n",s1.avg);


    return 0;
}