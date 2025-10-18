#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	double a, b, c;

	cout << "hitung sisi miring" << endl;
	cout << "      |\\   " << endl;
	cout << "      | \\  " << endl;
	cout << "    a |  \\ c" << endl;
	cout << "      |   \\ " << endl;
	cout << "      |____\\ " << endl;
	cout << "         b" << endl;

	

	cout << "\masukkan sisi a dan b: ";
	cin >> a >> b;
	c = sqrt((a * a) + (b * b));

	cout << "sisi miring c adalah: " << c << endl;

	system("pause");
	return 0;
}