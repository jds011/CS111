#include <iostream>
using namespace std;

int main() {
// square feet us 
// square meters other 
	double  squareFeet  = 43560.0,
		squareMeter =  10.7639;

	cout << "There are " << (1/4.0)*squareFeet  << " square feet and  " 
		<< ((1/4.0)*squareFeet)/squareMeter << " square meters "  <<
		" in 1/4 acre of land." << endl;

	return 0;
}
