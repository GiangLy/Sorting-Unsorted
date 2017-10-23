#include "unsorted.hpp"

#ifndef __QUICK__
#define __QUICK__
class Quick 
{
    int left, right;
    unsorted temp;
    int pivot;
    int passes;
public:
    Quick()
    {
		left = right = pivot = passes = 0;
		
	}
    void sort(unsorted arr[], int lft, int rght);
    int get_passes();
    void set_passes(int p);
};
#endif
