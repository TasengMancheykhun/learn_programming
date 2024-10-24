#include<iostream>
using namespace std;
class no
{
private:
    int a,b;
    
public:
    void getData();
    void add(no ,no);
    void print(){
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of a : "<<b<<endl;
    

   }
};

void no ::getData()
{
    cout<<"Enter a and b : ";
    cin>>a>>b;

   }
void no ::add(no x, no y){
a= x.a + y.a;
b= x.b +y.b;
}
   
int main(){

no n1,n2,n3;
n1.getData();
n2.getData();
n3.add(n1,n2);
n3.print();


    return 0;
}
