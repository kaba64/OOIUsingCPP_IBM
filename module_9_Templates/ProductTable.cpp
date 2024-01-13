#include<iostream>
using namespace std;

template<typename T>
class Arithmetic{
private:
  T a;
  T b;
public:
  Arithmetic(T aIn,T bIn)
    :a(aIn),b(bIn){}
  T multiply()const{return a*b;}
  
};

int main(){
  //Input statements are provided as a part of code skeleton 
  int a,b;
  float f1,f2;
  cout<<"Enter Integer Values:"<<endl;
  cin>>a;
  cin>>b;
  Arithmetic<int> integers(a,b);
  cout<<"Enter Float Values:"<<endl;
  cin>>f1;
  cin>>f2;
  Arithmetic<float> floats(f1,f2);
  cout<<"Multiplication Value of Integer Values: "<<integers.multiply()<<"\n";
  cout<<"Multiplication Value of Float Values: "<<floats.multiply()<<"\n";
  return 0;
}
