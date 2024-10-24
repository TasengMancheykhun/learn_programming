#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
   char c ;
   string specialCharacter = "`~!@#$%^&*()_+|:\"<>?/.,;'[]=\\-\'";
   cout<<"ENter  character to check : ";
   cin>>c;

  if(isalpha(c) != 0){
    cout<< c<<" is alphabet";
  }else if(isdigit(c) != 0){
    cout<< c<<" is digit";
  }else if((specialCharacter.find(c))!= 0 ) {
    cout<< c<<" is Special Character";
  }else 
  cout<< c<<" Invalid Input";

    return 0;
}