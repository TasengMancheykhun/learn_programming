#include <iostream>
using namespace std;

class student{
    public:
        int rollno;
        string name;
        
        student(){
            rollno = 1048;
            name = "John Wick";
        } 

        void print();
};

void student::print(){
       cout<<"The roll number of the student is : "<<rollno<<endl;
       cout<<"The name of the student is : "<<name<<endl;
}; 

int main(){
    student n;
    n.print();
    return 0;
}
