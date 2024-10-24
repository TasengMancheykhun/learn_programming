#include <iostream>
using namespace std;

// Multiple inheritance
// Two base classes, one child class inheriting from both


class A1{

    private:
    void showa1(){
        cout<<"class A1 - in showa"<<endl;
    };
    
    public:
    void showb1(){
        cout<<"class A1 - in showb"<<endl;
    }
    
    protected:
    void showc1(){
        cout<<"class A1 - in showc"<<endl;
    }
};

class A2{

    private:
    void showa2(){
        cout<<"class A2 - in showa"<<endl;
    };
    
    public:
    void showb2(){
        cout<<"class A2 - in showb"<<endl;
    }
    
    protected:
    void showc2(){
        cout<<"class A2 - in showc"<<endl;
    }
};



class B:public A1, private A2{

    private:
    void showx(){
        cout<<"class B - in showx"<<endl;
    };
    
    public:
    void showy(){
        cout<<"class B - in showy"<<endl;
        showc1();
    };
    
    protected:
    void showz(){
        cout<<"class B - in showz"<<endl;
    };
};


int main(){
 
    B b;
    b.showy();

    return 0;
}