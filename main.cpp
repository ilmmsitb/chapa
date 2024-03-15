#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned char x = 2379, c;
	int i;

	cout << "введите номер бита" << endl;
	cin >> i;
	c = pow(2, i);
	bool a = x & c;

	cout << a << endl;

	return 0;
}

