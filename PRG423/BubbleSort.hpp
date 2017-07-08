#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP


template <class T> void BubbleSort(T *items, int count)
{
	T t;
	bool swapped;

	for (int a = 1; a < count; a++)
	{
		swapped = false;
		for (int b = count - 1; b >= a; b--)
		{
			if (items[b - 1] > items[b])
			{
				t = items[b - 1];
				items[b - 1] = items[b];
				items[b] = t;
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}

#endif
