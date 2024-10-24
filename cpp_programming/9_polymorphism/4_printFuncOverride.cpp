#include<iostream>
using namespace std;

class base
  {

      public:
      void print(); 
  };
class derived: public base{

      public:
      virtual void print(); 

};

void base::print(){
    cout<<"Result is i n BASE FUNCTION....."<<endl;
};
void derived::print(){
    cout<<"Result is i n Derived FUnction FUNCTION....."<<endl;
};

int main()
{
 
    derived d;
    d.print();
   
    d.base::print();
    return 0;
}