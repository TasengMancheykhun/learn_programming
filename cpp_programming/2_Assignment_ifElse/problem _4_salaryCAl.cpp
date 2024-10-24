#include<iostream>
using namespace std;

int main(){
    int basic_salary;
    float allow=0,gross_salary;
    cout<<"Enter Basic Salary : \n";
    cin>>basic_salary;
    if(basic_salary<20000){
        allow=basic_salary*0.2;
    } else if(basic_salary>= 20000 && basic_salary <50000){
        allow=basic_salary*0.3;
    } else if(basic_salary>=50000){
        allow=basic_salary*0.35;
    }
    gross_salary=basic_salary+allow;
 cout<<"Gross Salary is : "<<gross_salary<<endl;
}