#include <iostream>

using namespace std;

int main() {

	double income = 0;
	double tax = 0;
	double after_tax = 0;

	cout << "Enter how much you earn a year before tax." << endl;
	cin >> income;

	if (income <= 12500)
	{

		cout << "You will recieve 0% tax. And your final income will be: $" << income << endl;
		cout << "This is how much you were taxed: $" << tax << endl;

	}

	else if (income <= 50000) {

		tax = (income * .20 - 12500);
		after_tax = (income - tax);

		cout << "Your income after tax will be: $" << after_tax << ". You have been taxed 20% of your income" << endl;
		cout << "This is how much you were taxed: $" << tax << endl;

	}

	else if (income <= 150000) {

		tax = (income * .40 - 12500);
		after_tax = (income - tax);

		cout << "Your income after tax will be: $" << after_tax << ". Your tax rate is 40%" << endl;
		cout << "This is how much you were taxed: $" << tax << endl;

	}

	else if (income >= 150000) {

		tax = (income * .45 - 12500);
		after_tax = (income - tax);

		cout << "Your income after tax will be: $" << after_tax << ". Your tax rate is 45%" << endl;
		cout << "This is how much you were taxed: $" << tax << endl;

	}

	system("pause");
	return (0);

}