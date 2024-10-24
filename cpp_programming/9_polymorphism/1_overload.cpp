#include<iostream>
using namespace std;

class func
  {
      int a,b;

      public:
         void get();

         func operator+(func);
         func operator-(func);

         void print(); 
  };


func func::operator+(func n)
  {
      func n3;
      n3.a = a + n.a;
      n3.b = b + n.b;
      return n3;
  };


func func::operator-(func n)
  {
      func n4;
      n4.a = a - n.a;
      n4.b = b - n.b;
      return n4;
  };

void func::get(){
    cout<<"Enter numbers: "<<endl;
    cin>>a>>b;
};

void func::print(){
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
};

int main()
{
    func x1,x2,x3,x4;
    x1.get();
    x2.get();

    x3=x1+x2;
    x3.print();

    x3=x1-x2;
    x3.print();
    return 0;
}