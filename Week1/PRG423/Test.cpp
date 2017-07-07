#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>

#include "BubbleSort.hpp"
#include "Person.hpp"
#include "Test.hpp"

using namespace std;


//Testing template bubble sort with Integer array's and double array's
void test01()
{
	int iarray[7] = { 7, 5, 4, 3, 9, 8, 6 };
	double darray[5] = { 4.3, 2.5, -0.9, 10.2, 3.0 };

	cout << "Here is unsorted integer array: ";
	for (int i = 0; i<7; i++)
		cout << iarray[i] << ' ';
	cout << endl;

	BubbleSort(iarray, 7);

	cout << "Here is sorted integer array: ";
	for (int i = 0; i<7; i++)
		cout << iarray[i] << ' ';
	cout << endl;

	cout << "Here is unsorted double array: ";
	for (int i = 0; i<5; i++)
		cout << darray[i] << ' ';
	cout << endl;

	BubbleSort(darray, 5);

	cout << "Here is sorted double array: ";
	for (int i = 0; i<5; i++)
		cout << darray[i] << ' ';
	cout << endl;
}

//Testing template bubble sort with char array
void test02()
{
	char cArray[7] = { 'e', 't', 'f', 'o', 'a', 's', 'z' };
	

	cout << "Here is unsorted char array: ";
	for (int i = 0; i<7; i++)
		cout << cArray[i] << ' ';
	cout << endl;

	BubbleSort(cArray, 7);

	cout << "Here is sorted char array: ";
	for (int i = 0; i < 7; i++)
		cout << cArray[i] << ' ';
	cout << endl;

}

void test03()
{
	Person *p1 = new Person(18);
	Person *p2 = new Person(12);
	Person *p3 = new Person(36);
	Person *p4 = new Person(11);
	Person *p5 = new Person(40);
	Person *p6 = new Person(42);

	vector<Person> People(7);









}
