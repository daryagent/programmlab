#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float num1 = 0;
	float num2 = 0;

	cout << "Vvedi pervoe chislo: ";
	cin >> num1;
	cout << "Vvedi vtoroe chislo: ";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

	cout << "Sredne arifmeticheskoe: ";
	cout << num1 << " + " << num2 << " / " << 2 << " = ";
	cout << (num1 + num2) / 2 << endl;

	cout << endl;

	return 0;
}
