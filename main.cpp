/*
Author: Giang Ly & Andrew Henson
Student ID: C427R468
Project 2

Description of Problem:

*/
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include "quick.cpp"
#include "unsorted.hpp"
//#include "quick.hpp"
#include "bubble.cpp"
//#include "bubble.hpp"

using namespace std;

int main()
{
	int i;
	Quick quicksort;
	Bubble bubblesort;
	ofstream ofile;
	
	//Create arrays in dynamic memory
	unsorted* ulist1 = new unsorted[100];
	unsorted* ulist2 = new unsorted[1000];
	unsorted* ulist3 = new unsorted[5000];
	
	unsorted* slist1 = new unsorted[100];
	unsorted* slist2 = new unsorted[1000];
	unsorted* slist3 = new unsorted[5000];
	
	//randomize the key and number
	for (i=0; i<100; i++)
	{
		ulist1[i].key = rand() % 100;
		ulist1[i].number = rand();
	}
	for (i=0; i<1000; i++)
	{
		ulist2[i].key = rand() % 1000;
		ulist2[i].number = rand();
	}
	for (i=0; i<5000; i++)
	{
		ulist3[i].key = rand() % 5000;
		ulist3[i].number = rand();
	}
	
	//set 2nd lists to the 1st list to preserve information in the 1st
	//list
	for (i=0; i<100; i++)
	{
		slist1[i].key = ulist1[i].key;
		slist1[i].number = ulist1[i].number;
	}
	for (i=0; i<1000; i++)
	{
		slist2[i].key = ulist2[i].key;
		slist2[i].number = ulist2[i].number;
	}
	for (i=0; i<5000; i++)
	{
		slist3[i].key = ulist3[i].key;
		slist3[i].number = slist3[i].number;
	}
	
	//Run the 2nd list through quicksort
	quicksort.sort(slist1,0,99);
	cout << "QUICK SORT" << endl;
	cout << "passes for 100 items: " << quicksort.get_passes() << endl;
	quicksort.set_passes(0);
	quicksort.sort(slist2,0,999);
	cout << "passes for 1000 items: " << quicksort.get_passes() << endl;
	quicksort.set_passes(0);
	quicksort.sort(slist3,0,4999);
	cout << "passes for 5000 items: " << quicksort.get_passes() << endl;
	quicksort.set_passes(0);
	
	//Resets 2nd list using values from first list.
	for (i=0; i<100; i++)
	{
		slist1[i].key = ulist1[i].key;
		slist1[i].number = ulist1[i].number;
	}
	for (i=0; i<1000; i++)
	{
		slist2[i].key = ulist2[i].key;
		slist2[i].number = ulist2[i].number;
	}
	for (i=0; i<5000; i++)
	{
		slist3[i].key = ulist3[i].key;
		slist3[i].number = slist3[i].number;
	}
	
	//Run the 2nd list through bubblesort
	bubblesort.sort(slist1,100);
	cout << "BUBBLE SORT" << endl;
	cout << "passes for 100 items: " << bubblesort.get_passes() << endl;
	bubblesort.set_passes(0);
	bubblesort.sort(slist2,1000);
	cout << "passes for 1000 items: " << bubblesort.get_passes() << endl;
	bubblesort.set_passes(0);
	bubblesort.sort(slist3,5000);
	cout << "passes for 5000 items: " << bubblesort.get_passes() << endl;
	bubblesort.set_passes(0);
	
	return 0;
}
