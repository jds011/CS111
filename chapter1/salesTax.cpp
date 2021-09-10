#include <iostream>
using namespace std;

int main()
{
	double itemCost = 52.0,
	       stateSalesTax = 4.0/100,
	       countySalesTax = 0.02;
	cout << "The purchase cost: $ " << itemCost << endl;
	cout << "The state sales tax: $ " << stateSalesTax << endl;
	cout << "The county sales tax: $ " << countySalesTax << endl;
	cout << "The purchase cost + state tax: $ " << itemCost*stateSalesTax << endl;
	cout << "The purchase cost + county tax: $ " << itemCost*countySalesTax << endl;
	return 0;
}
