#include <iostream>
using namespace std;

int calculateScore(int sixers,int fours,int singles){
  return (sixers*6)+(fours*4)+singles;
}
int calculateScore(int whiteCoins ,int blackCoins,bool red){
  int add{0};
  if(red)
    add=5;
  return (whiteCoins*2)+blackCoins+add;
}
int calculateScore(int goals ,int fouls){
  return (goals-fouls);
}

int main(){
  int six,four,single,white,black,goals,fouls;
  bool red;
  cout<<"CRICKET:"<<endl;
  cout<<"Enter number of sixers : "<<endl;
  cin>>six;
  cout<<"Enter number of fours : "<<endl;
  cin>>four;
  cout<<"Enter number of singles : "<<endl;
  cin>>single;
  cout<<"CALCULATED SCORE : "<<calculateScore(six,four,single)<<"\n";
  cout<<"CARROM:"<<endl;
  cout<<"Enter number of white coins pocket : "<<endl;
  cin>>white;
  cout<<"Enter number of black coins pocket : "<<endl;
  cin>>black;
  cout<<"Red Pocket(0/1): "<<endl;
  cin>>red;
  cout<<"CALCULATED SCORE : "<<calculateScore(white,black,red)<<"\n";
  cout<<"BASKETBALL:"<<endl;
  cout<<"Enter number of goals : "<<endl;
  cin>>goals;
  cout<<"Enter number of fouls : "<<endl;
  cin>>fouls;
  cout<<"CALCULATED SCORE : "<<calculateScore(goals,fouls)<<"\n";
  return 0;
}
