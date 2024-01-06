#include<iostream>
using namespace std;

class Height;

class Converter{
private:
  int cm;
public:
  Converter()
    :cm(0){}
  void setCm(int cmIn){cm=cmIn;}
  int getCm()const{return cm;}
  void toConvert(Height ht);
};
class Height{
private:
  int feet;
  int inch;
public:
  Height(int feetIn, int inchIn)
    :feet(feetIn),inch(inchIn){}
  void setFeet(int feetIn){feet=feetIn;}
  void setInch(int inchIn){inch=inchIn;}
  int getFeet()const{return feet;}
  int getInch()const{return inch;}
  double calculateHeight()const{return feet+(inch/10.0);}
  friend void Converter::toConvert(Height ht);
};
