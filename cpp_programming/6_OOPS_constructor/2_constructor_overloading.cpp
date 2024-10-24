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
    student n1;
    student n2(007,"James Bond");

    n1.print();
    cout<<endl;
    n2.print();

    return 0;
}