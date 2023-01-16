#pragma once
#include <array>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <time.h>

using namespace std;


class Grid
{
public:
	Grid(int Height, int Width);
	void printGrid();
	int getHeight() const { return Height; }
	int getWidth() const { return Width; }
	bool* getGrid() const { return grid; }
	int getPosition();
private:

	//N -- Number of Lines
	int Height;
	//M -- Number of Columns
	int Width;

	bool* grid;
};
