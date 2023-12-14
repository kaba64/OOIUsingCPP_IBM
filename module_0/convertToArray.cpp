#include <iostream>
using namespace std;

const int SIZE = 200;  // the allowed size of input name

int main() //DO NOT change the 'main' signature
{
  char inputStr[SIZE];
  cout<<"Enter the name:";
  cin>>inputStr;
  cout<<"Enter the index:";
  int index;
  cin>>index;
  cout<<"The character is "<<inputStr[index];
  return 0;
}
