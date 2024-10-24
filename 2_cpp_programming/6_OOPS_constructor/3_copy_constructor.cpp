#include <iostream>
using namespace std;

class student{
    public: 

        int rollno;
        string name;

        student(){
            rollno = 1048;
            name = "John Wick";
        };

        student(int x,string y){
            rollno = x;
            name = y;
        };

        void print();
};

void student::print(){
       cout<<"The roll number of the student is : "<<rollno<<endl;
       cout<<"The name of the student is : "<<name<<endl;
}; 

int main(){
    student n2(100,"Mohan Lal");
    student n1(n2);

     
    n2.print();
    cout<<endl;
    n1.print();

    return 0;
}