#include <iostream>

using namespace std;

int main() {
	double celcius, reamur, fahrenheit;

	cout << "konversi suhu" << endl;
	cout << "\nInput Celcius: ";
	cin >> celcius;

	reamur = (4.0 / 5.0) * celcius;
	fahrenheit = (9.0 / 5.0) * celcius + 32;

	cout << "\nKonversi :" << endl;
	cout << reamur << " " << char(248) << "R" << endl;
	cout << fahrenheit << " " << char(248) << "F" << endl;

	system("pause");
	return 0;
}