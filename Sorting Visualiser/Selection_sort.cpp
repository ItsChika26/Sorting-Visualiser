#include "Selection_sort.h"

Selection_sort::Selection_sort() :Sorter()
{
	
}

void Selection_sort::sort()
{
	if (!sorted) {
		int max = counter;
		for (int j = counter; j < SIZE; j++) {
			if (change)
				return;
			arr[j] > arr[max] ? max = j : max = max;
			current = j;
		}
		swap(arr[counter++], arr[max]);
		if (counter == SIZE)
			sorted = true;
	}
	update();
	draw();

}
