#include "Sorter.h"

int Sorter::counter = 0;


Sorter::Sorter(): sorted(false), current(0)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = i;
	for (int i = 0; i < SIZE; i++)
		swap(arr[i], arr[GetRandomValue(0, SIZE)]);
	update();
}

void Sorter::reset()
{
	for (int i = 0; i < SIZE; i++)
		swap(arr[i], arr[GetRandomValue(0, SIZE)]);
	sorted = false;
	counter = 0;
	current = 0;
	update();
}


void Sorter::draw()
{
	BeginDrawing();
	////
		ClearBackground(BLACK);
		for (int i = 0; i < SIZE; i++) {
			if (sorted)DrawRectangleRec(visual[i], GREEN);
			else {
				DrawRectangleRec(visual[i], WHITE);
				DrawRectangleRec(visual[counter], RED);
				DrawRectangleRec(visual[current], ORANGE);
			}
		}
		EndDrawing();
		
}

void Sorter::swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Sorter::update()
{
	for (int i = 0; i < SIZE; i++)
	visual[i] = { i * GetScreenWidth() / (float)SIZE,GetScreenHeight() * arr[i] / (float)SIZE,GetScreenWidth() / (float)SIZE, (float)GetScreenHeight() - GetScreenHeight() * arr[i] / (float)SIZE };
}
