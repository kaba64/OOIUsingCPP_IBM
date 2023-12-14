#include <iostream>
using namespace std;

int findSquare(const int input){
  //fill the code here
  if(input>0)
    return (input*input);
  else
    return -1;
}

int main() //DO NOT change the 'main' signature
{
  //Call the function and print the result
  int inputNUm{0};
  cin>>inputNUm;
  cout<<findSquare(inputNUm)<<"\n";
  return 0;
}
