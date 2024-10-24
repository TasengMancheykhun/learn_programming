#include <stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks[5];
    float total,avg;
};


int main(){
   
   struct student data[3];
   for(int i =0;i<=2;i++){
        printf("Enter roll no. of student: \n");
        scanf("%d",&data[i].rollno);
   
        printf("Enter name of student: \n");
        scanf("%s",data[i].name);

        printf("Enter mark of subject 1: \n");
        scanf("%f",&data[i].marks[0]);

        printf("Enter mark of subject 2: \n");
        scanf("%f",&data[i].marks[1]);

        printf("Enter mark of subject 3: \n\n");
        scanf("%f",&data[i].marks[2]);
    
        printf("_______________________Data OF student %s _________________\n",data[i].name);
 
        printf("Student Roll no: %d \n",data[i].rollno);
        printf("Student name: %s \n",data[i].name);

        data[i].total = data[i].marks[0] + data[i].marks[1]+ data[i].marks[2];
        data[i].avg = data[i].total/3.0;
 
        printf("Total marks obtained: %f\n",data[i].total);

        printf("Average is: %f\n\n",data[i].avg);

        printf("__________________________________________________________________\n\n");
   
   }
    return 0;
}