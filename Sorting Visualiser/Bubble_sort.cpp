#include "Bubble_sort.h"



Bubble_sort::Bubble_sort(): Sorter()
{
}

void Bubble_sort::sort()
{
	int max = 0;
	if (!sorted) {
		for (int j = 0; j < SIZE - counter - 1; j++) {
			if (change)
				return;
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				max = j;
				current = j;
			}
		}
		counter++;
		if (counter == SIZE)
			sorted = true;
	}
	update();
	draw();
}