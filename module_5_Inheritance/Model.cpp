#include <iostream>
using namespace std;

class Heroine {
protected:
  double earningsPerDay;
public:
  void setEarningsPerDay(double earnings){earningsPerDay=earnings;}
  double getEarningsPerDay()const{return earningsPerDay;}
  long calcEarnings(int noOfDays){return earningsPerDay * noOfDays;}
};
 
class MovieHeroine: public Heroine{
private:
  int daysRun;
public:
  long calcEarnings(int noOfDays){
    int extraPercentage{0};
    long totalEarning{Heroine::calcEarnings(noOfDays)};
    if(daysRun>100){
      extraPercentage=10;
    }else if(daysRun>50 && daysRun<=100){
      extraPercentage=5;      
    }
    return totalEarning+(totalEarning*extraPercentage/100);
  }
  void setDaysRun(int daysRunIn){daysRun=daysRunIn;}
  int getDaysRun()const{return daysRun;}
};

class AdvertisementModel: public Heroine{
private:
  int rating;
public:
  long calcEarnings(int noOfDays){
    int extraAmount{0};
    if(rating>5){
      extraAmount = 10000;
    }else if(rating>2 && rating<=5){
      extraAmount = 5000;
    }
    return (earningsPerDay * noOfDays + extraAmount);
  }
  void setRating(int ratingIn){rating=ratingIn;}
  int getRating()const{return rating;}
};

int main(){  
  int movie,ad,rating,daysRun;
  double earningsPerDay;
  cout<<"Enter the earnings per day :"<<endl;
  cin>>earningsPerDay;
  cout<<"Enter the number of days for movie :"<<endl;
  cin>>movie;
  cout<<"Enter the number of days movie run:"<<endl;
  cin>>daysRun;
  
  MovieHeroine movie1;
  AdvertisementModel advertise1;

  cout<<"Enter the number of days for advertisement  :"<<endl;
  cin>>ad;
  cout<<"Enter the Advertisement rating: "<<endl;
  cin>>rating;
  
  movie1.setDaysRun(daysRun);
  movie1.setEarningsPerDay(earningsPerDay);
  cout<<"Earnings for Movie: "<<movie1.calcEarnings(movie)<<"\n";
  advertise1.setEarningsPerDay(earningsPerDay);
  advertise1.setRating(rating);
  cout<<"Earnings for Advertisement: "<<advertise1.calcEarnings(ad)<<"\n";
  return 0;
}
