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
    cout<<"\n\n";

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

Student s[5];
for(int i=0;i<5;i++){
s[i].getData();
s[i].print();
}


    return 0;
}
