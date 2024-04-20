#include "Insertion_sort.h"

Insertion_sort::Insertion_sort(): Sorter()
{
}

void Insertion_sort::sort()
{
    if (!sorted) {
        int key, j;
        key = arr[++counter];
        j = counter - 1;

        while (j >= 0 && arr[j] < key)
        {
        	if (change)
                return;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        current = j + 1;
        if (counter == SIZE)
            sorted = true;
    }
    update();
    draw();
}
