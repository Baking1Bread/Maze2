#pragma once
#include <vector>
#include "Cell.h"
using namespace std;
class Grid
{
public:
	Grid(int rows, int cols);

	void generateMaze();




private:

	int rows;
	int cols;

	int cellWidth = 3;
	int cellHeight = 3;

	vector<Cell*> cells = NULL;

	Cell* targetCell;
	Cell* startingCell;
}
