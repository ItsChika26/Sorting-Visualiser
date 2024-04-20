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
#include <thread>
using namespace std;

void choiceManager(vector<Sorter*>type, int* choice)
{
		
	
	while (true)
	{
		if (IsKeyPressed(KEY_ONE)) {
			if (*choice != 0)
			{
				type[*choice]->change_sorter();
			}
			*choice = 0;
			type[*choice]->reset();
		}
		if (IsKeyPressed(KEY_TWO)) {
			if (*choice != 1)
			{
				type[*choice]->change_sorter();
			}
			*choice = 1;
			type[*choice]->reset();
		}
		if (IsKeyPressed(KEY_THREE)) {
			type[*choice]->change_sorter();
			*choice = 2;
			type[*choice]->reset();
		}
		if (IsKeyPressed(KEY_FOUR)) {
			if (*choice != 3)
			{
				type[*choice]->change_sorter();
			}
			*choice = 3;
			type[*choice]->reset();
		}
	}

}

int main()
{
	InitWindow(1600, 900, "Sorting Visualiser");
	SetTargetFPS(144);
	int counter = 0;
	SetRandomSeed((int)time(0));
	int choice = 0;
	vector<Sorter*>type = { new Bubble_sort,new Selection_sort,new Merge_sort,new Insertion_sort };
	thread runner(&choiceManager, type, &choice); // Pass 'type' before 'choice'
	runner.detach();
	while (!WindowShouldClose()) {
		type[choice]->sort();
	}
}