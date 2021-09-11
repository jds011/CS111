#include <iostream>
using namespace std;

int main() {
	double  gallons_gas = 20.0,
		inTownSpeed = 21.5,
		inHighwaySpeed = 26.5;
	cout << "Distance travel in town:  " << gallons_gas* inTownSpeed <<
		" miles" << endl;
	cout << "Distance travel in  the highway: " << gallons_gas* inHighwaySpeed <<
		" miles" << endl;
	return 0;
}
