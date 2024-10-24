#include<iostream>

using namespace std;
class employee{
 int emp_no ,salary;
 string emp_name;
 public:

    int getEmp_no(){
        return emp_no;
    }
     int getsalary(){
        return salary;
    }
    string getName(){
        return emp_name;
    }
    void setEmp_no(){
         cout<<"Enter employee no.: ";
         cin>>emp_no;
    }
     void setsalary(){
        cout<<"Enter Total salary : ";
         cin>>salary;
       
    }
    void setName(){
        cout<<"Enter employee name : ";
         cin>>emp_name;
    }


};

int main (){
    employee e1;
    e1.setEmp_no();
    e1.setName();
    e1.setsalary();

    cout<<"Emp NO : "<<e1.getEmp_no()<<endl;
    cout<<"Emp Name : "<<e1.getName()<<endl;
    cout<<"Emp salary : "<<e1.getsalary()<<endl;

    return 0;
}