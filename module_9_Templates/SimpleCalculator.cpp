#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Calculator{
public:
  Calculator(T1 aIn,T2 bIn)
    :a(aIn),b(bIn){}
  auto add()const{return static_cast<decltype(a+b)>(a+b);}
  auto multiply()const{return static_cast<decltype(a*b)>(a*b);}
  auto subtract()const{return static_cast<decltype(a-b)>(a-b);}
  auto divide()const{
    if (b!=0) {
      return static_cast<decltype(a/b)>(a/b);
    }else{
      cerr << "Error: Division by zero!\n";
      return static_cast<decltype(a/b)>(0);
    }
  }
  void displayResult()const{
    cout<<"Numbers are: "<<a<<" and "<<b<<"\n";
    cout<<"Addition is: "<<add()<<"\n";
    cout<<"Subtraction is: "<<subtract()<<"\n";
    cout<<"Product is: "<<multiply()<<"\n";
    cout<<"Division is: "<<divide()<<"\n";
  }
private:
  T1 a;
  T2 b;
};

int main()
{
  Calculator<int,int> integer_calculator(1,2);
  integer_calculator.displayResult();
}
