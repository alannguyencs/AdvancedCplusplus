#include <iostream>
#include <iomanip>
using namespace std;

/*
All the data types of the variables are upgraded to the data type of the variable with largest data type:
bool
-> char
-> short int -> int -> unsigned int
-> long -> unsigned long -> long long
-> float -> double -> long double
ref: https://www.geeksforgeeks.org/type-conversion-in-c/
*/

int main()
{
	int i = 5;
	char a = 'B';
	double x = 1.57;

	cout << "i + x = 5 + 1.57 = " << i + x << endl;
	cout << "a * x = B * 1.57 = " << a * x << endl;

	//===============================================
	int m = 3, n = 2;
	double k;

	k = m / n;
	cout << "k = m / n = 3 / 2 = " << k << endl;

	k = m / double(n);
	cout << "k = m / double(n) = 3 / double(2) = " << k << endl;

	k = double(m) / n;
	cout << "k = double(m) / n = double(3) / 2 = " << k << endl;

	k = double(m / n);
	cout << "k = double(m / n) = double(3 / 2) = " << k << endl;


}


