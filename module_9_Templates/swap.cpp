#include<iostream>
using namespace std;

template<typename T> void swapValues(T &num1,T &num2){
  T temp{num1};
  num1=num2;
  num2=temp;
  cout<<"val1="<<num1<<" val2="<<num2<<"\n";
}

int main(){
  int x1,y1;
  double x2,y2;
  char c1,c2;
  cout<<"Enter Integer Values:"<<endl;
  cin>>x1;
  cin>>y1;
  cout<<"Enter Double Values:"<<endl;
  cin>>x2;
  cin>>y2;
  cout<<"Enter Character Values:"<<endl;
  cin>>c1;
  cin>>c2;
  
  cout<<"Before Swap:\n";
  cout<<"x1="<<x1<<" y1="<<y1<<"\n";
  cout<<"x2="<<x2<<" y2="<<y2<<"\n";
  cout<<"c1="<<c1<<" c2="<<c2<<"\n";

  cout<<"After Swap:\n";
  swapValues(x1,y1);
  swapValues(x2,y2);
  swapValues(c1,c2);
  return 0;
}
