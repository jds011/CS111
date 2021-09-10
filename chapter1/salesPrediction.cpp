#include <iostream>
using namespace std;
int main()
{
	double percent_TotalSales = 0.62; // produce 62% of the of the total sales.
	double totalSales = 4600000;
	cout << "The East Coast sales division generated $"
	       	<< totalSales * percent_TotalSales <<
	        " out of the $" << totalSales <<
	       	" the company made in total sales this year." << endl;
	return 0;
}
