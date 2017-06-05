#include "Student.hpp"
#include "Utilities.hpp"
#include "test.hpp"
#include "a.hpp"
#include "Pointers.hpp"

#include <cstdio>
#include <iostream>
#include <cstring>


using namespace std;

//Test 1 is Student Class with 10 students
void test01(void) 
{
	Student s;
		for (int i = 0; i < 10; i++)
		{
			s.AddGrade(i);
		}
	s.Debug();
	char c;
	scanf("%c", &c);
}

//Test 2 is is a test for the Extended Array function
void test02(void) 
{
	int* ar = new int[10];
		ExtendArrayInt(&ar, 10, 20);
	ar[19] = 666;
	cout << ar[19] << endl;
	delete[] ar;
}

//Test 3 is a test on adding numbers to an array.
void test03(void)
{
	A a; //creating an object of type A
	a.AddNumber(1);
	a.AddNumber(2);
	a.AddNumber(6);
	a.Debug();
}

//Test 4 is an basic test to extend the array.
void test04(void)
{
	int* myarray = new int[10];
	int cap = 10;
	int n_cap = 20;

	for (int i = 0; i < cap; i++)
	myarray[i] = i;

	ExtendArrayInt(&myarray, cap, n_cap);

	for (int i = cap; i < n_cap; i++)
	myarray[i] = i;

	for( int i = 0; i < n_cap; i++)
	cout << "value at location " << i << " is : " << myarray[i] << endl;

	delete[] myarray;
}

//Test 5 is an example of Pointers
void test05(void)
{
	int res = 0;
	int v1 = 1;
	int v2 = 1;

	addValuesInt(&res, &v1, &v2);
}

//Test 6 is Student Class with 30 students and the extending of arrays.
void test06(void)
{
	Student s;

	for (int i = 0; i < 30; i++)
	{
		s.AddGrade(i);
	}
	s.Debug();
}

//Test 7 is using the Extend Array Template as Int
void test07(void)
{
	int* myarray = new int[10];
	int cap = 10;
	int n_cap = 20;

	for (int i = 0; i < cap; i++)
		myarray[i] = i;

	ExtendArray<int>(&myarray, cap, n_cap);

	for (int i = cap; i < n_cap; i++)
		myarray[i] = i;

	for (int i = 0; i < n_cap; i++)
		cout << "value at location " << i << " is : " << myarray[i] << endl;

	delete[] myarray;

}

//Test 8 is using the Extend Array Template as Float
void test08(void)
{
	float* myarray = new float[10];
	int cap = 10;
	int n_cap = 50;

	for (int i = 0; i < cap; i++)
		myarray[i] = i * 1.2f;

	ExtendArray<float>(&myarray, cap, n_cap);

	for (int i = cap; i < n_cap; i++)
		myarray[i] = i * 1.2f;

	for (int i = 0; i < n_cap; i++)
		cout << "value at location " << i << " is : " << myarray[i] << endl;

	delete[] myarray;

}

//Test 9 is using the Vector and Extend Templates as ints
void test09(void)
{
	Student s;

	for (int i = 0; i < 100; i++)
	{
		s.AddGrade(i);
	}
	s.Debug();
}

//Test 10 tests the Add Element on Vector.
void test10(void)
{
	Vector <int> v;
	
	for (int i = 0; i < 100; i++)
	{
		v.AddElement(i);
		cout << "The Element at v is " << v.ElementAt(i) << endl;
	}
	
}