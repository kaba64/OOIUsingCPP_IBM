#include<iostream>
#include<exception>
#include <string> 
using namespace std; 

void elementDuplication(){
  cout<<"Enter the size of an array\n";
  int size{0};
  cin>>size;
  cout<<"Enter the array elements\n";
  int data[size];
  for(int i=0;i<size;++i)
    cin>>data[i];
  cout<<"Enter the index position of the element in the array to be replicated\n";
  int index{0};
  cin>>index;
  if(index>size-1)
    throw runtime_error("Array index is out of range");
  data[size-1] = data[index];
  for(int i=0;i<size;++i)
    cout<<data[i]<<"\t";
  cout<<"\n";
}

int main(){
  
  try{
    elementDuplication();
  }catch(exception &e){
    cerr<<e.what();
  } 
}
