#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string a, b;
	cout << "Hello!\n";
	cout << "Your name: ";
	cin >> a;
	cout << "Project name: ";
	cin >> b;
	cout << "\n" << b << " by " << a << endl;
	int sl1, sl2, sub1, sub2, mul1, mul2;
	cout << "Addition\n" << "Enter sl1 and sl2:";
	cin >> sl1 >> sl2;
	cout << "Result: " << sl1 + sl2 << endl;
	cout << "Subtraction\n" << "Enter sub1 and sub2: ";
	cin >> sub1 >> sub2;
	cout << "Result: " << sub1 - sub2 << endl;
	cout << "Multiplicationn\n" << "Enter mul1 and mul2: ";
	cin >> mul1 >> mul2;
	cout << "Result: " << mul1*mul2 << endl;
}