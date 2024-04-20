#pragma once
#include "raylib.h"

const int SIZE = 1000;

class Sorter {
protected:
	int arr[SIZE],
		current;
	Rectangle visual[SIZE];
	bool sorted;
	static int counter;
	bool change;
	
public:
	Sorter();
	void reset();
	void change_sorter() { change = true; };
	virtual void sort() = 0;
	void draw();
	void swap(int& a, int& b);
	void update();
};

