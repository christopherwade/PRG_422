#include "a.hpp"
#include <iostream>

using namespace std;

// side note: the difference between Destructor, Constructor, and
//regular methods is that DTORS and CTORs have no return type

A::A() //default constructor
{
	// new is a memory allocation operator
	array = new int[10];
	m_counter = 0;
}

A::~A() // destructor ~ placeholder to release allocated memory
{
	// memory deallocation operator
	delete[] array;
}


//Because AddNumber is a regular method it does have a return type
void A::AddNumber(int n)
{
	if (m_counter >= 9)
	{
		return;
	}
	else
	{
		array[m_counter] = n;
		m_counter++;
	}

}

void A::Debug(void)
{
	cout << "Number of elements = "<< m_counter << endl;
	cout << "The elements in the array are: " << endl;
	for (int i =0; i < m_counter; i++)
	{
		cout << array[i] << endl;
	}
	

	
}