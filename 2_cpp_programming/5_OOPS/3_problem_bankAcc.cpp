#include<iostream>
using namespace std;
class bankAccount
{
private:
    int ac_no;
    string name;
    string ac_type;
    int bal_amount;

public:
    void assign_values();
    void withdraw();
    void  deposit();
    void display();
    
};
void bankAccount ::assign_values(){
    cout<<"Enter Account Holder's Name : ";
    cin>>name;
    cout<<"Enter Account Number : ";
    cin>>ac_no;
    cout<<"Enter Account Type : ";
    cin>>ac_type;
}

void bankAccount :: withdraw()
{   int amount;
    cout<<"Enter Amount to withdraw: ";
    cin>>amount;
    bal_amount = bal_amount - amount;
    cout<<amount<<" debited Successfully........"<<endl;
    
   }

void bankAccount :: deposit()
{   int amount;
    cout<<"Enter Amount to deposit : ";
    cin>>amount;
    bal_amount = bal_amount + amount;
     cout<<amount<<" credited Successfully........"<<endl;
   }
void bankAccount :: display(){
    cout<<"\nName: "<<name<<endl;
    cout<<"Balance Amount :"<<bal_amount<<endl; 
   }

   
int main(){
bankAccount b1;
b1.assign_values();
b1.deposit();
b1.display();
b1.withdraw();
b1.display();

    return 0;
}
