#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <iostream>

#include "BubbleSort.hpp"
#include "Test.hpp"
#include "Node.hpp"
#include "LinkedList.hpp"


using namespace std;


void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//void BubbleSort(int array[], int x)
//{
//	int i, k;
//	bool swapped;
//
//	for (i = 0; i < x - 1; i++)
//	{
//		swapped = false;
//		for (k = 0; k < x - i - 1; k++)
//		{
//			if (array[k] > array[k + 1])
//			{
//				swap(&array[k], &array[k + 1]);
//				swapped = true;
//			}
//		}
//
//		if (swapped == false)
//			break;
//	}
//}

//void printArray(int ar[], int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		cout << ar[i] << endl;
//	}
//
//}


int main(int argc, char* argv[])
{
	/*int array[] = { 15,2,4,-1,0 };
	int a = sizeof(array) / sizeof(array[0]);
	BubbleSort(array, a);

	cout << "Sorted array: \n" << endl;
	printArray(array, a);*/

	//test01();

	//test02();

	Node *n = new Node();
	n->Unit_Test();

	LinkedList Lista;

	Lista.Unit_Test();


	char c;
	scanf("%c", &c);

	return 0;
}
