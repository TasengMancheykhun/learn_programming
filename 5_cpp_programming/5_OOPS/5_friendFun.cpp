#include<iostream>
using namespace std;

class no2;
class no1{
    int a;
    public:
    void get(){
        cout<<"Enter value of a: ";
        cin>>a;
    }

friend void add(no1,no2);
friend void sub(no1,no2);
friend void mul(no1,no2);
friend void div(no1,no2);
};
class no2{
 int b;
 public:
 void getb(){
     cout<<"Enter value of b: ";
        cin>>b;
 }
 friend void add(no1,no2);
 friend void sub(no1,no2);
 friend void mul(no1,no2);
 friend void div(no1,no2);
};

void add (no1 x ,no2 y){
    int s;
    s=x.a +y.b;
    cout<<"Addition : "<<s<<endl;
}
void sub (no1 x ,no2 y){
    int s;
    s=x.a -y.b;
    cout<<"Substraction : "<<s<<endl;
}
void mul (no1 x ,no2 y){
    int s;
    s=x.a *y.b;
    cout<<"MUltiplicaiton : "<<s<<endl;
}
void div (no1 x ,no2 y){
    int s;
    s=x.a /y.b;
    cout<<"Division : " <<s<<endl;
}
int main(){
 no1 x;
 no2 y;
 x.get();
 y.getb();
 add(x,y);
 sub(x,y);
 mul(x,y);
 div(x,y);
    return 0;
}