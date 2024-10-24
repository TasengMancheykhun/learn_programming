#include<iostream>
using namespace std;

class base
  {

      public:
      virtual void print(); 
  };

class derived: public base{

      public:
      void print(); 

};

void base::print(){
    cout<<"Result is i n BASE FUNCTION....."<<endl;
};

void derived::print(){
    cout<<"Result is i n Derived FUnction FUNCTION....."<<endl;
};

int main()
{
    base x, *px;
    derived y;

    px = &y;
    px->print();
     
}