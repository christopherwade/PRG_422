#include "Pointers.hpp"
#include <iostream>


void addValuesInt(int* res, int* v1, int* v2)
{
	*res = (*v1 + *v2);

	std::cout << "The value of res is " << *res << std::endl;
};


