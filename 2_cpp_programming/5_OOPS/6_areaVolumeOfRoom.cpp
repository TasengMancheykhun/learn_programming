#include<iostream>
using namespace std;
class Room
{
private:
    int length,breadth,height;
    
public:
    float room_area;
    float room_volume;
    void area();
    void volume();
   void getData(){
    cout<<"Enter Length of the room : ";
    cin>>length;
    cout<<"Enter Breadth of the room : ";
    cin>>breadth;
    cout<<"Enter height of the room : ";
    cin>>height;
   }
    void print(){
    cout<<"Area Of room : "<<room_area<<endl;
    cout<<"VOlume of room  : "<<room_volume<<endl;
   
   }
};
 void Room :: volume(){
        room_volume = length*breadth*height;
    }

void Room ::area()
{
    room_area = length*breadth;
   }

   
int main(){

Room s1;
s1.getData();
s1.area();
s1.volume();
s1.print();



    return 0;
}
