#include <iostream>
#include "PublicRational.h"
#include "PrivateRational.h"
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	PublicRational pr, p{3, 2};
	cin >> pr;
	cout << pr/p << endl;
	

	PrivateRational pr1, pr2{3, 2};
	cin >> pr1;
	cout << pr1 / pr2 << endl;

	return 0;
}