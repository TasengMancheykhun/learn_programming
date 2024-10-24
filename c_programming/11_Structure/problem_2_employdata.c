#include <stdio.h>

struct employ{
    int em_no;
    char name[20];
    int dept_code;
    float salary;
};


int main(){
   
   struct employ s1;

   printf("Enter Employee No. : \n");
   scanf("%d",&s1.em_no);
   
   printf("Enter name of student: \n");
   scanf("%s",s1.name);

   printf("Enter Deparment code: \n");
   scanf("%d",&s1.dept_code);

   printf("Enter salary : \n");
   scanf("%f",&s1.salary);




   printf("Employee  no: %d \n",s1.em_no);
   printf("Employee name: %s \n",s1.name);
    printf("Employee  department code: %d \n",s1.dept_code);
    printf("Employee  total salary: %f \n",s1.salary);



    return 0;
}