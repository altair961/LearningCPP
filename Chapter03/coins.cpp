// Solution for exercise 3.11
// This program gets from the user numbers representing pennies,
// nickels, etc. then shows these ammounts
// and their equivalent in cents

#include "../std_lib_facilities.h"

int main()
{
  int pennies = 0;
  int nickels = 0;
  int dimes = 0;
  int quarters = 0;
  int half_dollars = 0;
  int one_dollars = 0;

  cout << "How many pennies do you have? ";
  cin >> pennies;
  
  cout << "How many nickels do you have? ";
  cin >> nickels;
  
  cout << "How many dimes do you have? ";
  cin >> dimes;
  
  cout << "How many quarters do you have? ";
  cin >> quarters;
    
  cout << "How many half-dollar coins do you have? ";
  cin >> half_dollars;
  
  cout << "How many one-dollar consn do you have? ";
  cin >> one_dollars;
    
  return 0;
}

