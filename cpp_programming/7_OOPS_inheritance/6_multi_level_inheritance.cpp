#include <iostream>
using namespace std;


// class A takes input and displays result
// class B is child class of class A, calculates square
// class C is child class of class B, calculates cube, inherits result from square.

class A{

    protected:
        int a;  
        

    public:
        int sqr,cbe;

        void getdata(){
             cout<<"Enter a number: "<<endl;
             cin>>a;
        }
        
        void display(){
             cout<<"The number doubled is: "<<sqr<<endl;
             cout<<"The number tripled is: "<<cbe<<endl;
        }
};


class B:public A{
    
    public:
        int square(){
             sqr = a*a;             
             return sqr;
    }
};


class C:public B{
    
    public:
        int cube(){
            cbe = a*sqr;
            return cbe;
    }
};


int main(){

    C c;

    c.getdata();
    c.square();
    c.cube();
    c.display();

    return 0;
}