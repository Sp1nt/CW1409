#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int* ptr; 
	int size;  
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input();
	void Output();
	DynamicArray operator +(int);
	DynamicArray operator -(int);
	DynamicArray operator *(int);
	DynamicArray operator - (DynamicArray b);
	DynamicArray operator + (DynamicArray b);
	DynamicArray operator++();
	DynamicArray operator--();

	int* GetPointer();
	int GetSize();


};
