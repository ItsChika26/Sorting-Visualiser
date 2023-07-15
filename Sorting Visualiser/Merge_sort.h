#pragma once
#include "Sorter.h"
class Merge_sort : public Sorter {
public:
	Merge_sort();
	void sort() override;
	void merger(int array[], int const begin, int const end);
	void merge(int array[SIZE], int const left, int const mid,int const right);
};