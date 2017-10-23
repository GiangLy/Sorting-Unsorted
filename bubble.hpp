#include "unsorted.hpp"

#ifndef __BUBBLE__
#define __BUBBLE__
class Bubble 
{
    int n;
    unsorted temp;
    int passes;
public:
    Bubble()
    {
		n = passes = 0;
		
	}
    void sort(unsorted arr[], int n);
    int get_passes();
    void set_passes(int p);
};
#endif
