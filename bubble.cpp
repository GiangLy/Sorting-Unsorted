#include "bubble.hpp"

void Bubble::sort (unsorted arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			passes++;
			if (arr[j].key > arr[j + 1].key)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}		

int Bubble::get_passes()
{
	return passes;
}

void Bubble::set_passes(int p)
{
	passes = p;
}
