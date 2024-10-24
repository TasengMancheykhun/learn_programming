#include<iostream>
using namespace std;
class Student
{
private:
    int roll_no;
    string name;
    int avg;
public:
    void getData();
    void print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No.: "<<roll_no<<endl;
    cout<<"Average Score: "<<avg<<endl;
   }
};

void Student ::getData()
{
    cout<<"Enter Roll No. : ";
    cin>>roll_no;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Average score : ";
    cin>>avg;

   }

   
int main(){

Student s1,s2,s3;
s1.getData();
s1.print();

s2.getData();
s2.print();

s3.getData();
s3.print();

    return 0;
}
