#include<iostream>
using namespace std;

class func
  {
      int a,b,c;

      public:
         void get();

         func operator-();

         void print(); 
  };

func func::operator-()
  { 
    a= - a;
    b= - b;
    c= - c;
  };

void func::get(){
    cout<<"Enter numbers: "<<endl;
    cin>>a>>b>>c;
};

void func::print(){
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
    cout<<"value of c is: "<<c<<endl;
};

int main()
{
    func x1;
    x1.get();
    -x1;
    x1.print();
    return 0;
}