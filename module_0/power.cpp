#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
  cout<<"Enter number"<<"\n";
  int a{0};
  cin>>a;
  cout<<"Enter power value\n";
  int power;
  cin>>power;
  int result{a};
  for(int i=1;i<power;++i){result*=a;}
  cout<<result<<"\n";
  return 0;
}
