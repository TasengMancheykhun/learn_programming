#include <iostream>
using namespace std;

class base{
    
    public:
    int a,b;
    
    void getdata(){
        cout<<"Enter value of a and b: ";
        cin>>a>>b;
    }
};

class derived:public base{
    
    public:
    void add(){
         cout<<"Addition of a and b: "<<a+b<<endl;
    }

    void sub(){
         cout<<"Subtraction of a and b: "<<a-b<<endl;

    }

    void mult(){
         cout<<"Multiplication of a and b: "<<a*b<<endl;
    }

    void div(){
         cout<<"Division of a and b: "<<a/b<<endl;
    }

};

int main(){

    derived a;
    a.getdata();
    a.add();
    a.sub();
    a.mult();
    a.div();

    return 0;
}