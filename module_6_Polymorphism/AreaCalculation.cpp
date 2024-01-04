#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape{
  virtual double calculateArea()=0;
};

class Circle: public Shape{
private:
  int radius;
public:
  double calculateArea()override{return acos(-1.0)*radius*radius;}
  void setRadius(int r){radius=r;}
  int getRadius()const{return radius;}
};
class Rectangle: public Shape{
private:
  int width;
  int height;
public:
  double calculateArea()override{return width*height;}
  void setWidth(int w){width=w;}
  int getWidth()const{return width;}
  void setHeight(int h){height=h;}
  int getHeight()const{return height;}
};
class Triangle: public Shape{
private:
  float base;
  float height;
public:
  double calculateArea()override{return 0.5*base*height;}
  void setBase(float b){base=b;}
  float getBase()const{return base;}
  void setHeight(float h){height=h;}
  float getHeight()const{return height;}
};


int main(){  
  
  string shape;
  cout<<"Enter the type of shape:"<<endl;
  cin>>shape;
  
  if(shape.compare("Circle") == 0){
    int radius;
    cout<<"Enter the radius(in cm):\n";
    cin>>radius;
    Circle circle1;
    circle1.setRadius(radius);
    cout<<"The area of the Circle is: "<<circle1.calculateArea()<<" square centimeters\n";
  }else if(shape.compare("Rectangle") == 0){
    int width;
    int height;
    cout<<"Enter the width (in cm):\n";
    cin>>width;
    cout<<"Enter the height (in cm):\n";
    cin>>height;
    Rectangle rectangle1;
    rectangle1.setWidth(width);
    rectangle1.setHeight(height);
    cout<<"The area of the Rectangle is: "<<rectangle1.calculateArea()<<" square centimeters\n";
  }else if(shape.compare("Triangle") == 0){
    float base;
    float height;
    cout<<"Enter the base (in cm):\n";
    cin>>base;
    cout<<"Enter the height (in cm):\n";
    cin>>height;
    Triangle triangle1;
    triangle1.setBase(base);
    triangle1.setHeight(height);
    cout<<"The area of the Triangle is: "<<triangle1.calculateArea()<<" square centimeters";
  }
  
  return 0;
}
