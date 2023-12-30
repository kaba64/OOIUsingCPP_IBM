#include <iostream>
#include <string>
using namespace std;

class Player{
private:
  int playerID;
  string playerName;
  int playedMatches;
  int playerScore;
  
public:
  Player(int playerIDIn,string playerNameIn,int playerScoreIn)
    :playerID(playerIDIn),playerName(playerNameIn),playerScore(playerScoreIn){}
  Player(int playerIDIn,string playerNameIn,int playedMatchesIn,int playerScoreIn)
    :playerID(playerIDIn),playerName(playerNameIn),playedMatches(playedMatchesIn),playerScore(playerScoreIn){}
  
  int getPlayerID()const{return playerID;}
  int getPlayedMatches()const{return playedMatches;}
  int getPlayerScore()const{return playerScore;}
  string getPlayerName()const{return playerName;}
  void displayThreeArgument()const{
    cout<<"Player ID. : "<<getPlayerID()<<"\n";
    cout<<"Player Name : "<<getPlayerName()<<"\n";
    cout<<"Player Score : "<<getPlayerScore()<<"\n";
  }
  void displayFourArgument(){
    cout<<"Player ID. : "<<getPlayerID()<<"\n";
    cout<<"Player Name : "<<getPlayerName()<<"\n";
    cout<<"Played Matches : "<<getPlayedMatches()<<"\n";
    cout<<"Player Score : "<<getPlayerScore()<<"\n";
  }
  ~Player(){cout<<"Destructor Called\n";}  
};
int main(){
  Player threeArg(1001,"John",130);
  threeArg.displayThreeArgument();
  Player fourArg(1002,"Raj",100,5000);
  fourArg.displayFourArgument();
  return 0;
}
