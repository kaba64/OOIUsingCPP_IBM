#include<iostream>
#include <exception>

using namespace std;

// Asssume the number has three digit
bool findMiddle(int num)
{
  int middleNumber{(num/10)-(num/100)*10};
  if(middleNumber==5 || middleNumber==7)
    return true;
  else
    throw runtime_error("Not a lucky code");
}

int main()
{
  int num;
  cout<<"Enter the number"<<endl;
  cin>>num;

  try{
    findMiddle(num);
    cout<<num<<" is a lucky code\n";
  }catch(const exception &e){
    cerr << e.what() <<endl;
  }
}
