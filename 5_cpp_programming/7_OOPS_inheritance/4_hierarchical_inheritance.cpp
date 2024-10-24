#include <iostream>
using namespace std;


class number{
    protected:
    int a;
    int ss,cc;
    
    public:
   
    void getdata(){
        cout<<"Enter a number"<<endl;
        cin>>a;
    };   
};


class square:public number{
    
    public:
    int getsquare(){
        ss=a*a;
    }
     void display(){
        cout<<"Square of number "<<a<<" is: "<<ss<<endl;
        
    }
};


class cube:public number{
    
    public:
    int getcube(){
       cc=a*a*a;
    }
     void display(){
        cout<<"Cube of number "<<a<<" is: "<<cc<<endl;
    }
};


int main(){
    square s;
    cube c;
    
    s.getdata();
    s.getsquare();
    c.getdata();
    c.getcube();
    
    s.display();
    c.display();
    return 0;
}