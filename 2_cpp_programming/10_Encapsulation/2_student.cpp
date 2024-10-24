#include <iostream>

using namespace std;

class student{
    int avg, rollno, mark[3], total;
    string name;

    public:

        int getrollno()
        {
            return rollno;
        }

        string getname()
        {
            return name;
        }

        void setrollno(){
            cout<<"Enter Roll no."<<endl;
            cin>>rollno;
        }

        void setname(){
            cout<<"Enter Name of student"<<endl;
            cin>>name;
        }

        void setmarks(){

            cout<<"Enter marks of three subjects: "<<endl;
            for (int i=0;i<3;i++){
                cin>>mark[i];
            }
        }

        int getavg(){
            total=0;
            for (int i=0;i<3;i++){
                total+= mark[i];
            }
            avg = total/3;
            return avg;
        }
};

int main(){
    student a;

    a.setrollno();
    a.setname();

    a.setmarks();

    cout<<"Average of marks of student \'"<<a.getname()<<"\' of roll no. \'"<<a.getrollno()<<"\' is: "<<a.getavg()<<endl;

    return 0;
}
