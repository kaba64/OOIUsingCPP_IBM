#include<iostream>
using namespace std;

class Addition{
private:
  int real;
  int img;
  
public:
  Addition(int r, int i)
    :real(r),img(i){}
  friend class Operation;
};
