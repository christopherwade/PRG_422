#include "Utilities.hpp"

void ExtendArrayInt(int** ptr, int old_cap, int new_cap)
{
	int* backup = new int[old_cap];
	for (int i = 0; i < old_cap; i++)
		backup[i] = (*ptr)[i];
	delete[] *ptr;
	*ptr = new int[new_cap];
	for (int i = 0; i < old_cap; i++)
		(*ptr)[i] = backup[i];
	delete[] backup;
}