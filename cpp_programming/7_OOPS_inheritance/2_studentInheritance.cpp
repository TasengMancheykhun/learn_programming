#include <iostream>
using namespace std;

class Student{
    
    public:
    int roll_no;
    string name;
    int total,sub1,sub2,sub3;
    float avg;
    void totalsc(){
        total=sub1+sub2+sub3;
        cout<<"Total score : "<<total<<endl;
    }
     void average(){
        avg=(sub1+sub2+sub3)/3;
        cout<<"Average score : "<<avg<<endl; 
    }
    void getdata(){
        cout<<"Enter Roll No. ";
        cin>>roll_no;
        cout<<"Enter Name ";
        cin>>name;
    }
};

class mech:public Student{
    
    public:
    void getScore(){
        cout<<".........SCORE OF MECHANICAL BRANCH..........."<<endl;
         cout<<"Enter Marks Of Subject1 : "<<endl;
         cin>>sub1;
          cout<<"Enter Marks Of Subject2 : "<<endl;
         cin>>sub2;
          cout<<"Enter Marks Of Subject3 : "<<endl;
         cin>>sub3;

    }

};
class Entc:public Student{
    
    public:
    void getScore(){
        
        cout<<".........SCORE OF ENTC BRANCH..........."<<endl;
         cout<<"Enter Marks Of Subject1 : "<<endl;
         cin>>sub1;
          cout<<"Enter Marks Of Subject2 : "<<endl;
         cin>>sub2;
          cout<<"Enter Marks Of Subject3 : "<<endl;
         cin>>sub3;

    }

};
class comp:public Student{
    
    public:
    void getScore(){
        cout<<".........SCORE OF COMPUTER BRANCH..........."<<endl;
         cout<<"Enter Marks Of Subject1 : "<<endl;
         cin>>sub1;
          cout<<"Enter Marks Of Subject2 : "<<endl;
         cin>>sub2;
          cout<<"Enter Marks Of Subject3 : "<<endl;
         cin>>sub3;

    }

};


int main(){

    mech m1;
    Entc e1;
    comp c1;
    m1.getdata();
    m1.getScore();
    m1.totalsc();
    m1.average();

    e1.getdata();
    e1.getScore();
    e1.totalsc();
    e1.average();

    c1.getdata();
    c1.getScore();
    c1.totalsc();
    c1.average();
    return 0;
}