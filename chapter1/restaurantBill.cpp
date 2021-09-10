#include  <iostream>
using namespace std;

int main ()
{
	double mealCharge = 44.50,
	       tax = 6.75/100,
	       tipPercentage = 15.0/100,
	       total;
	cout << "Meal cost: $" << mealCharge << endl;
	cout << "Tax amount: $" << tax << endl;
	cout << "Tip amount: $" << tipPercentage << endl;
	cout << "Total bill: $" << (mealCharge*( 1.0 + tax))* tipPercentage;
	return 0;
}
