#include<iostream>
using namespace std;

class func
  {
      int a,b,c;

      public:
         void get();

         func operator++();
         func operator--();

         void print(); 
  };

func func::operator++()
  { 
         a++;
         b++;
         c++;

  };
  func func::operator--()
  { 
         a--;
         b--;
         c--;

  };

void func::get(){
    cout<<"Enter numbers: "<<endl;
    cin>>a>>b>>c;
};

void func::print(){
    cout<<"Result is: "<<a<<","<<b<<","<<c<<endl;
};

int main()
{
    func x1,x2,x3;
    x3.get();
    ++x3;
    x3.print();
    --x3;
    x3.print();
    return 0;
}