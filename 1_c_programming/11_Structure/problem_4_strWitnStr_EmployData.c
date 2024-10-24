#include <stdio.h>

struct employ{
    int emp_no;
    char name[20];
    int gross_salary;

    struct allowance{
        int basic;
        int da;
        int hra;
    }empl;
};


int main(){
   
   struct employ s1;

   printf("Enter Employee No. : \n");
   scanf("%d",&s1.emp_no);
   
   printf("Enter name of student: \n");
   scanf("%s",s1.name);

   printf("Enter Basic salary: : \n");
   scanf("%d",&s1.empl.basic);
   
   printf("Enter DA : : \n");
   scanf("%d",&s1.empl.da);
   
   printf("Enter HRA: : \n\n");
   scanf("%d",&s1.empl.hra);

   s1.gross_salary=s1.empl.basic+s1.empl.da+s1.empl.hra ;

 printf("_______________________SALARY SLIP OF :  %s _________________\n",s1.name);

   printf("Employee  no: %d \n",s1.emp_no);
   printf("Employee name: %s \n",s1.name);
   printf("Employee  Gross salary: %d \n",s1.gross_salary);


printf("__________________________________________________________________\n\n");


    return 0;
}