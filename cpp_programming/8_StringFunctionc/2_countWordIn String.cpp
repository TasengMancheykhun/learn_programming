#include <iostream>
using namespace std;

int main() {

  string sentence = "This is cdac cpp class";
  int words = 0;
  int length= sentence.size();


  for(int i = 0; i < length; i++)
  {
    if(sentence[i] == ' ')
    {
      words++;
    }

  }
  words = words + 1;

  cout << "No. of words = " << words << endl;

}