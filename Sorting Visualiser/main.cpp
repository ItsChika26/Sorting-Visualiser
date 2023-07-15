#include "raylib.h"
#include "raymath.h"
#include "Sorter.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "Selection_sort.h"
#include "Bubble_sort.h"
#include "Insertion_sort.h"
#include "Merge_sort.h"
#include <vector>
using namespace std;




int main()
{
	InitWindow(1600, 900, "Sorting Visualiser");
	SetTargetFPS(144);
	int counter = 0;
	SetRandomSeed((int)time(0));
	int choice = 0;
	vector<Sorter*>type = { new Bubble_sort,new Selection_sort,new Merge_sort,new Insertion_sort };
	while (!WindowShouldClose()) {
		if (IsKeyPressed(KEY_ONE)) {
			choice = 0;
			type[choice]->reset();
		}
		if (IsKeyPressed(KEY_TWO)) {
			choice = 1;
			type[choice]->reset();
		}
		if (IsKeyPressed(KEY_THREE)) {
			choice = 2;
			type[choice]->reset();
		}
		if (IsKeyPressed(KEY_FOUR)) {
			choice = 3;
			type[choice]->reset();
		}
		type[choice]->sort();
	}


	
}