#include "DynamicArray.h"
#include <iostream>
#include<Windows.h>

DynamicArray::DynamicArray() :ptr(nullptr), size(0)
{}
DynamicArray::DynamicArray(int S)
{
    cout << "Construct by 1 param\n";
    size = S;
    ptr = new int[S];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = 0;
    }
}

DynamicArray::DynamicArray(const DynamicArray& a)// copy constructor
{
    cout << "Copy construct\n";
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
    Sleep(1000);
}
DynamicArray::~DynamicArray()
{
    cout << "Destruct\n";
    if (ptr != 0)
    {
        delete[] ptr;
    }
    Sleep(1000);
}
void DynamicArray::Input()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
    }
}
void DynamicArray::Output() 
{
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << "\n---------------------------------\n";
}

int* DynamicArray::GetPointer()
{
    return ptr;
}
int DynamicArray::GetSize()
{
    return size;
}

DynamicArray DynamicArray:: operator+(int b)
{
    DynamicArray rez;

    rez.size = size + b;
    rez.ptr = new int[rez.size];
    for (int i = 0; i < rez.size; i++)
    {
        if (i < size)
            rez.ptr[i] = ptr[i];
        else
            rez.ptr[i] = 0;
    }
    return rez;
}
DynamicArray DynamicArray:: operator-(int b)
{
    DynamicArray rez;
    if (size < b)
    {
        return *this;
    }
    rez.size = size - b;

    rez.ptr = new int[rez.size];
        for (int i = 0; i < rez.size; i++)
        {
            rez.ptr[i] = ptr[i];
        }
    return rez;
}

DynamicArray DynamicArray:: operator*(int b)
{
    DynamicArray rez;
    rez.size = this->size;
    rez.ptr = new int[rez.size];
    for (int i = 0; i < rez.size; i++)
    {
        rez.ptr[i] = this->ptr[i] * b;
    }

    return rez;
}

DynamicArray DynamicArray::operator-(DynamicArray b)
{
    for (int i = 0; i < size; i++)
        ptr[i] -= b.ptr[i];

    return *this;
}

DynamicArray DynamicArray::operator+(DynamicArray b)
{
    DynamicArray rez;
    rez.size = this->size + b.size;
    rez.ptr = new int[rez.size];
    for (int i = 0, j = 0; i < rez.size; i++) {
        if (i >= this->size) {
            rez.ptr[i] = b.ptr[j];
            j++;
        }
        else {
            rez.ptr[i] = this->ptr[i];
        }
    }
    return rez;
}


DynamicArray DynamicArray::operator++()
{
    size++;
    int* newArray = new int[size] {0};

    for (int i = 0; i < size; i++) {
        newArray[i] = ptr[i];

        if (i == size - 1)
            newArray[i] = 0;
    }
    ptr = newArray;

    return *this;
}

DynamicArray DynamicArray::operator--()
{
    if (size > 0)
    {
   size--;
	int* newArray = new int[size];

	for (int i = 0; i < size; i++)
		newArray[i] = ptr[i];
    }
	return *this;
}

