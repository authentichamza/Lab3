#include <iostream>
using namespace std;
void Interest(float InterestRate,int savings,int year){
  savings=savings+(savings*InterestRate*year);
  cout<<"The new savings are "<<savings<<endl;
}

int main()
{
  int savings=10000;
  int year;
  float InterestRate=0.1;
  cout<<"Enter No. Of Year Added"<<endl;
  cin>>year;
  Interest(InterestRate,savings,year);

  return 0;
}
