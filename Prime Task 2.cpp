#include <iostream>
using namespace std;


int main()
{
  int a, i;

  bool primenu = true;

  cout << "Enter a positive integer: ";
  cin >> a;

  for(i = 2; i <= a / 2; i++)
  {
      if(a % i == 0)
      {
          primenu = false;
      }
  }
  if (primenu){
      cout << "It is a Prime Number";
    }
  else{
      cout << "It is not a Prime Number";
    }

  return 0;
}
