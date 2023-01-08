#pragma once
#include<cstring>
#include<vector>
#include<array>
#include<iostream>
#include<list>

using namespace std;


class Grid
{
public:
	Grid(int Height, int Width);
	void printGrid();
	int getHeight() { return Height; }
	int getWidth() { return Width; }
	bool* getGrid() { return grid; }
	int getPosition();
private:

	//N -- Number of Lines
	int Height;
	//M -- Number of Columns
	int Width;

	bool* grid;
};
