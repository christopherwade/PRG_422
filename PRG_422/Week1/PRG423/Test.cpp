#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>

#include "BubbleSort.hpp"
#include "Person.hpp"
#include "Test.hpp"
#include "Node.hpp"
#include "LinkedList.hpp"

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

//Test of a Template LinkedList with Ints
void test03()
{
	LinkedList<int> List1;
	List1.AddNode(23);
	List1.AddNode(36);
	List1.AddNode(48);

	List1.print();

}

//test of template LinkedList with Chars
void test04()
{
	LinkedList<char> List1;
	List1.AddNode('c');
	List1.AddNode('b');
	List1.AddNode('a');

	List1.print();
}

//test of insert function into LinkedList at front
void test05()
{
	LinkedList<int> List1;
	List1.AddNode(23);
	List1.AddNode(36);
	List1.AddNode(48);

	List1.print();

	List1.insert(69);

	List1.print();

}
