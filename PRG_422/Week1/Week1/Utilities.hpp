#ifndef UTILITIES_HPP
#define UTILITIES_HPP

void ExtendArrayInt(int** ptr, int old_cap, int new_cap);

template <typename T> void ExtendArray(T** ptr, int old_cap, int new_cap)
{
	T* temp = new T[old_cap];
	for (int i = 0; i < old_cap; i++)
		temp[i] = (*ptr)[i];
	delete[] * ptr;
	*ptr = new T[new_cap];
	for (int i = 0; i < old_cap; i++)
		(*ptr)[i] = temp[i];
	delete[] temp;

}
#endif
