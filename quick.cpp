#include "unsorted.hpp"
#include "quick.hpp"
#include <iostream>

using namespace std;

void Quick::sort(unsorted arr[], int lft, int rght)
{
	  passes++;
      left = lft;
      right = rght;
      pivot = arr[(lft + rght) / 2].key;
	  unsorted tmp;
      /* partition */
      while (left <= right) {
            while (arr[left].key < pivot)
                  left++;
            while (arr[right].key > pivot)
                  right--;
            if (left <= right) {
                  tmp = arr[left];
                  arr[left] = arr[right];
                  arr[right] = tmp;
                  left++;
                  right--;
            }
      };
 
      /* recursion */
      if (lft < right)
            sort(arr, lft, right);
      if (left < rght)
            sort(arr, left, rght);
}

int Quick::get_passes()
{
	return passes;
}

void Quick::set_passes(int p)
{
	passes = p;
}


