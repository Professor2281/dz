#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #4.1/1\n\n";
	int userNumber, d1, d2, d3, d4, d5, d6, sum1,
		sum2, temp;
	cout << "Please, enter your 6-digit number:\n";
	cin >> userNumber;
	if (userNumber / 100000 < 1)
	{
		cout << "Your number includes less than "
			"6 digits!\n";
	}
	else if (userNumber / 100000 > 9)
	{
		cout << "Your number includes more than "
			"6 digits!\n";
	}
	else
	{
		cout << "Your number includes exactly "
			"6 digits!\n";
		d6 = userNumber % 10;
		temp = userNumber / 10;
		d5 = temp % 10;
		temp = temp / 10;
		d4 = temp % 10;
		temp = temp / 10;
		d3 = temp % 10;
		temp = temp / 10;
		d2 = temp % 10;
		d1 = temp / 10;
		cout << d1 << " " << d2 << " " << d3 << " ";
		cout << d4 << " " << d5 << " " << d6;
		sum1 = d1 + d2 + d3;
		sum2 = d4 + d5 + d6;
		if (sum1 == sum2)
		{
			cout << "Your number brings you good luck!";
		}
		else
		{
			cout << "It’s a pity!";
		}
	}
	return 0;
}