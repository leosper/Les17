// Les17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a=0, b=0;
	int oper = 0;
	
	cout << "Enter two numbers: ";
	cin >> a >> b;

	cout << "select 1 for sum : " << endl;
	cout << "select 2 for dif : " << endl;
	cout << "select 3 for mult: " << endl;
	cout << "select 4 for div : " << endl;
	cin >> oper;

	switch (oper)
	{
	case 1:
		cout << a << " + " << b << " = " << a + b;
		break;
	case 2:
		cout << a << " - " << b << " = " << a - b;
		break;
	case 3:
		cout << a << " * " << b << " = " << a * b;
		break;
	case 4:
		cout << a << " / " << b << " = " << a / b;
		break;
	default:
		cout << "Exit:";
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
