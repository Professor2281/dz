#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #4.1.2\n\n";
	int userNumber, d1, d2, d3, d4, newNumber, temp;
	cout << "Please, enter your 4-digit number:\n";
	cin >> userNumber;
	if (userNumber / 1000 < 1)
	{
		cout << "Your number includes less than "
			"4 digits!\n";
	}
	else if (userNumber / 1000 > 9)
	{
		cout << "Your number includes more than "
			"4 digits!\n";
	}
	else
	{
		cout << "Your number includes exactly "
			"4 digits!\n";
		d4 = userNumber % 10;
		temp = userNumber / 10;
		d3 = temp % 10;
		temp = temp / 10;
		d2 = temp % 10;
		d1 = temp / 10;
		cout << "Your number in digits: \n";
		cout << d1 << " " << d2 << " " << d3 << " ";
		cout << d4 << " Let’s modify it. \n";
		newNumber = d2 * 1000 + d1 * 100 + d4 *
			10 + d3;
		cout << "Your new number: " << newNumber;
	}
	return 0;
}