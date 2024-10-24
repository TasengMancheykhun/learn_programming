#include<iostream>
using namespace std;

int func_cal(int &x, int &y, int &cal){
    int t = 0;
    if (cal == 1){
         t = x+y;
    }    
    else if (cal == 2){
         t = x-y;
    }
    else if (cal == 3){
         t = x*y;
    }
    else if (cal == 4){
         t = x/y;
    }

    return t;

}

int main(){
    int a,b,cal;
    int &aa=a;
    int &bb=b;
    int &cc=cal; 
    int tt;

    cout<<"Value of a:"<<endl;
    cin>>a;
    cout<<"Value of b:"<<endl;
    cin>>b;
    cout<<"Choose what to calculate:"<<endl;
    cout<<"1. Add"<<endl<<"2. Sub"<<endl<<"3. Mult"<<endl<<"4. Div"<<endl;
    cin>>cal;
 
    tt = func_cal(aa,bb,cc);
    cout<<"The value after calculation: "<<tt<<endl;
 
        
      
}
     
