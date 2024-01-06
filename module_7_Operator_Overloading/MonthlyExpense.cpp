#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class MonthlyExpense {
  
private:
  double household_exp;
  double medical;
public:
  void setHouseHoldExpense(double houseExp) {household_exp=houseExp;}
  void setMedicalExpense(double medicalIn) {medical=medicalIn;}
  double getHouseHoldExpense()const{return household_exp;}
  double getMedicalExpense()const{return medical;}
  double calculateNovemberMonthExpense(){return household_exp+medical;}
  double calculateDecemberMonthExpense(){return household_exp+medical;}
  double calculateTotalExpense() {
    return household_exp+medical;
  }
  MonthlyExpense operator +(const MonthlyExpense b)
  {
    MonthlyExpense out;
    out.household_exp = household_exp+b.household_exp;
    out.medical = medical+b.medical;
    return out;
  }
};


int main(){ 
  double expenses = 0.0;
  double novHousHol1,novMedEx2,decHousHol1,decMedEx2;
  cout<<"Enter the House hold expense of November(in $)  :";
  cin>>novHousHol1;
  cout<<"Enter the Medical expense of November(in $)  :";
  cin>>novMedEx2;
  cout<<"Enter the House hold expense of December(in $) :";
  cin>>decHousHol1;
  cout<<"Enter the Medical expense of December(in $) :";
  cin>>decMedEx2;
  MonthlyExpense November, December;
  November.setHouseHoldExpense(novHousHol1);
  November.setMedicalExpense(novMedEx2);
  December.setHouseHoldExpense(decHousHol1);
  December.setMedicalExpense(decMedEx2);
  MonthlyExpense total = November+December;
  cout<<"November Expenses (in $) : "<<November.calculateNovemberMonthExpense()<<"\n";
  cout<<"December Expenses (in $) : "<<December.calculateDecemberMonthExpense()<<"\n";
  cout<<"Total Expenses for the month of Nov and Dec (in $) : "<<total.calculateTotalExpense()<<"\n";
  return 0;
}
