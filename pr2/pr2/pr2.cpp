#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Calculator\n";
	int sl1, sl2, sub1, sub2, mul1, mul2, div1, div2, ch;
	cout << "Choose the action: \n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n";
	cin >> ch;
	if (ch == 1)
	{
		cout << "Addition\n" << "Enter sl1 and sl2:";
		cin >> sl1 >> sl2;
		cout << "Result: " << sl1 + sl2 << endl;
	}
	if (ch == 2)
	{
		cout << "Subtraction\n" << "Enter sub1 and sub2: ";
		cin >> sub1 >> sub2;
		cout << "Result: " << sub1 - sub2 << endl;
	}
	if (ch == 3)
	{
		cout << "Multiplicationn\n" << "Enter mul1 and mul2: ";
		cin >> mul1 >> mul2;
		cout << "Result: " << mul1 * mul2 << endl;
	}
	if (ch == 4)
	{
		cout << "Division\n" << "Enter div1 and div2: ";
		cin >> div1 >> div2;
		cout << "Result: " << div1 / div2 << endl;
	}
	return 0;
}