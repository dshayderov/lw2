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
	int sl1, sl2;
	cout << "Addition\n" << "Enter sl1 and sl2:";
	cin >> sl1 >> sl2;
	cout << "Result: " << sl1 + sl2 << endl;
}