#include <cstdio>
#include <cstring>
#include "a.hpp"
#include "a.hpp"
#include "Student.hpp"
#include "Utilities.hpp"
#include "Pointers.hpp"
#include <iostream>

// _CRT_SECURE_NO-WARNINGS


int main(int argc, char* argv[])
{
	//A a; //creating an object of type A
	//a.AddNumber(1);
	//a.AddNumber(2);
	//a.AddNumber(6);
	//a.Debug();

	//printf("Hello World\r\n");
	//char c;

	int* myarray = new int[10];

	//int size = sizeof(myarray);
	//printf("The size of an int = %i", size);

	/*Student s;

	for (int i = 0; i < 30; i++)
	{
		s.AddGrade(i);
	}
	s.Debug();*/

	int cap = 10;
	int n_cap = 20;

	for (int i = 0; i < cap; i++)
		myarray[i] = i;

	ExtendArrayInt(&myarray, cap, n_cap);

	for (int i = cap - 1; i < n_cap; i++)
		myarray[i] = i + 1;

	for( int i = 0; i < cap; i++)
		std::cout << "value at location " << i << " is : " << myarray[ i ] << std::endl;

	delete[] myarray;

	

	/*int res = 0;
	int v1 = 1;
	int v2 = 1;

	addValuesInt(&res, &v1, &v2);*/

	char c;
	scanf("%c", &c);

	return 0;
}