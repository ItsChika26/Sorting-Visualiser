#pragma once
#include "raylib.h"

const int SIZE = 5000;

class Sorter {
protected:
	int arr[SIZE],
		current;
	Rectangle visual[SIZE];
	bool sorted;
	static int counter;
	
public:
	Sorter();
	void reset();
	virtual void sort() = 0;
	void draw();
	void swap(int& a, int& b);
	void update();
};

