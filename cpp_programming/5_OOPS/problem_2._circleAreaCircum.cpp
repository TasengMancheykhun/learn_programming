#include<iostream>
using namespace std;
class Circle
{
private:
    int radius;
    
public:
    float carea;
    float circumference;
    void area();
    void circum();
   void getData(){
    cout<<"Enter radius of the Circle : ";
    cin>>radius;
   }
    void print(){
    cout<<"Area Of circle : "<<carea<<endl;
    cout<<"Circumference Of circle : "<<circumference<<endl;
   
   }
};
 void Circle :: circum(){
        circumference= 2*3.14*radius;
    }

void Circle ::area()
{
    carea = 3.14*radius*radius;
   }

   
int main(){

Circle s1;
s1.getData();
s1.area();
s1.circum();
s1.print();



    return 0;
}
