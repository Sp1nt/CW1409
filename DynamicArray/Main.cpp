#pragma once
#include "DynamicArray.h"
#include <cstdlib> 
#include <ctime>

void main()
{
	srand(time(nullptr));
	DynamicArray a(5); // constructor 1 param
	DynamicArray b(5);
	a.Input();
	b.Input();
	a.Output();
	b.Output();
	cout << endl;

	cout << "Increase the number of elements by 10" << endl;
	DynamicArray rez1 = a + 10;
	rez1.Output();
	cout << endl;

	DynamicArray rez2 = a - 2;
	cout << "Remove the last 2 elements if size >2" << endl;
	rez2.Output();
	cout << endl;

	DynamicArray rez3 = a * 2;
	cout << "multiply the value of each array element by 2 and return a new array" << endl;
	rez3.Output();
	cout << endl;

	cout << "Copy" << endl;
	b.Output();

	DynamicArray rez4 = a - b;
	cout << "array difference" << endl;
	rez4.Output();
	cout << endl;

	DynamicArray rez5 = a + b;
	cout << "array concatenation" << endl;
	rez5.Output();
	cout << endl;

	DynamicArray rez6 = ++a;
	cout << "increase the number of elements by 1 (value 0)" << endl;
	rez6.Output();
	cout << endl;

	DynamicArray rez7 = --a;
	cout << "the number of elements decreases by 1, remove the last element" << endl;
	rez7.Output();
	cout << endl;





    system("pause");
}