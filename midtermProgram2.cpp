//This code allows you to see the difference in cost from owning a generic Ev 
//compared to a gneric gas car
//Aramis Artiga
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double gPrice, // stores gas prices
           homeCost, // stores kwh prices
           milesPerWeek, // stores inputed miles driven weekly
           genericGasTotalCost, // stores yearly cost of gas car
           genericEvTotalCost; // stores yearly cost of EV
           
    double differnceCost;
           

    // Displays questions below
  cout << "What is your local gas price per gallon to the nearest penny: ";
  cin >> gPrice; // stores given number as xx.xx
  cout << "What is your home cost per kWh to the nearest penny: ";
  cin >> homeCost; // stores given number as xx.xx
  cout << "How many miles do you drive per week to the nearest whole number:";
  cin >> milesPerWeek; // stores given number as whole number
  
  //Calculations for yearly cost for gas car
  genericGasTotalCost = ((gPrice/35*milesPerWeek*52));
  // Calculations for yearly cost for EV
  genericEvTotalCost = ((homeCost/4*milesPerWeek*52));
  //Calculates the difference cost from driving a EV compared to a gas car
  differnceCost = (genericGasTotalCost - genericEvTotalCost);
  
  //The below displays all the calculations from inputed user numbers
  cout << "It will cost you " << setprecision(2) << fixed <<
  genericGasTotalCost << " to run a gas vehicle.\n";
  //I used set precision to have the 2 decimal places
  cout << "It will cost you $" << setprecision(2) << fixed <<
  genericEvTotalCost << " to run a generic EV." << endl;
  
  cout << "It is cheaper to use a EV because it saves you $ " << setprecision(2)
  << fixed << differnceCost << " per year by using an Ev instead of a gas car.";
  
 
  
  
 

    return 0;
}
