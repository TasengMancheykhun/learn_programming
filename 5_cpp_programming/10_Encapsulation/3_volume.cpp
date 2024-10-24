#include <iostream>

using namespace std;

class thing{
    int volume;

    public:
        int getvolume()
        {
            return volume;
        }

        void setvolume()
        {    
            cout<<"Enter the volume of the thing: "<<endl;
            cin>>volume;
        }
};

int main(){
    thing t;
    
    t.setvolume();
    cout<<"The volume of the thing is: "<<t.getvolume()<<endl;
}