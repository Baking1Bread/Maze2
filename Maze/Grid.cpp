#include"Grid.h"

Grid::Grid(rows, cols)
{
	this->rows = rows;
	this->cols = cols;

	cells = vector<Cell*>(rows * cols);

	for(int y = 0; y < rows; y++)
	{ 
		for (int x = 0; x < cols; x++)
		{
			cells.push_back();
		}
	}
	

}

