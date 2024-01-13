#include<iostream>
using namespace std;

template <typename T>
inline T maxVal(T t1,T t2){return t1>t2 ? t1:t2;}

template <typename T>
class Player
{
public:
  Player(T s1,T s2,T s3)
    :score1(s1),score2(s2),score3(s3){}
  T findMaxScore()const{return maxVal(score3,maxVal(score1,score2));}
private:
  T score1;
  T score2;
  T score3;
};

int main(){
  int score1,score2,score3;
  double f1,f2,f3;
  cout<<"Enter Score of Player 1 in Match 1:"<<endl;
  cin>>score1;
  cout<<"Enter Score of Player 1 in Match 2:"<<endl;
  cin>>score2;
  cout<<"Enter Score of Player 1 in Match 3:"<<endl;
  cin>>score3;
  Player <int> interger_scores(score1,score2,score3);
  cout<<"Enter Score of Player 2 in Match 1:"<<endl;
  cin>>f1;
  cout<<"Enter Score of Player 2 in Match 2:"<<endl;
  cin>>f2;
  cout<<"Enter Score of Player 2 in Match 3:"<<endl;
  cin>>f3;
  Player <double> double_scores(f1,f2,f3);
  cout<<"Maximum Score of Player 1: "<<interger_scores.findMaxScore()<<"\n";
  cout<<"Maximum Score of Player 2: "<<double_scores.findMaxScore()<<"\n";
}
