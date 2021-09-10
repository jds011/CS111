#include <iostream>
using namespace std;

int main()
{
	int gallons_gasoline = 16;
	int milesTraveled = 350;

	cout << "The car can run " << milesTraveled/gallons_gasoline <<
		" before having to be refilled" << endl;
	return 0;
}
