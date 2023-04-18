#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #4.1.3\n\n";
	int d1, d2, d3, d4, d5, d6, d7, maxNumber;
	cout << "Please, enter your 1st number:\n";
	cin >> d1;
	cout << "Please, enter your 2nd number:\n";
	cin >> d2;
	cout << "Please, enter your 3d number:\n";
	cin >> d3;
	cout << "Please, enter your 4th number:\n";
	cin >> d4;
	cout << "Please, enter your 5th number:\n";
	cin >> d5;
	cout << "Please, enter your 6th number:\n";
	cin >> d6;
	cout << "Please, enter your 7th number:\n";
	cin >> d7;
	if (d1 > d2)
	{
		maxNumber = d1;
	}
	else
	{
		maxNumber = d2;
	}
	if (d3 > maxNumber)
	{
		maxNumber = d3;
	}
	if (d4 > maxNumber)
	{
		maxNumber = d4;
	}
	if (d5 > maxNumber)
	{
		maxNumber = d5;
	}
	if (d6 > maxNumber)
	{
		maxNumber = d6;
	}
	if (d7 > maxNumber)
	{
		maxNumber = d7;
	}
	cout << "Your max number: " << maxNumber;
	return 0;
}