#include <iostream>
using namespace std;


// class A and B are two base classes
// class A inputs data and class B displays the result 
// class C is derived class with functions add,sub,multi,div

class A{

    protected:
        int a,b;

    public:

        void getdata(){
             cout<<"Enter two numbers: "<<endl;
             cin>>a>>b;
        }
};


class B{
    
    public:
        int ad,sb,mu;
        float dv;
        
        void display(){
             cout<<"Addition of the numbers: "<<ad<<endl;   
             cout<<"Subtraction of the numbers: "<<sb<<endl;
             cout<<"Multiplication of the numbers: "<<mu<<endl;
             cout<<"Division of the numbers: "<<dv<<endl;
         
         }
};


class C:public A, public B{
    
    public:
        void add(){
            ad = a+b;
        }

        void sub(){
            sb = a-b;
        }

        void mult(){
            mu = a*b;
        }

        void div(){
            dv = (float)a/(float)b;
        }
};


int main(){

    C c;

    c.getdata();
    c.add();
    c.sub();
    c.mult();
    c.div();

    c.display();

    return 0;
}