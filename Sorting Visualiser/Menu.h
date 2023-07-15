#pragma once
#include "raylib.h"
class Menu {
	int choice;
	Rectangle Select, Bubble, Insertion, Merge;

public:
	Menu();
	void screen();
};
