#include <iostream>
using namespace std;


class base{

    public:
    int a1,a2;  

    void getdata(){
        cout<<"Enter two numbers: "<<endl;
        cin>>a1>>a2;
    }

};


class child1:public virtual base{
    
    public:
        int aa;
        int sum(){
            aa = a1+a2;
            return aa;
    }
};


class child2:public virtual base{
    
    public:
        int ss;
        int sub(){
            ss = a1-a2;
            return ss;
    }
};


class add:public child1, public child2{
    
    public:
        void display_add(){
            cout<<"Sum of two numbers: "<<a1<<" + "<<a2<<" is: "<<aa<<endl;
        }

        void display_sub(){
            cout<<"Subtraction of two numbers: "<<a1<<" - "<<a2<<" is: "<<ss<<endl;
        }
};


int main(){

    add l;
    l.getdata();
    l.sum();
    l.display_add();

    l.sub();
    l.display_sub();

    return 0;
}