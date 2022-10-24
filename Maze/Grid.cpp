#include"Grid.h"
#include<array>
#include<vector>
#include <iostream>
using namespace std;

Grid::Grid(int num_rows, int num_columns)
{
	this->num_rows = num_rows;
	this->num_columns = num_columns;

}

void Grid::generateMaze()
{


	
	
	
	
	for (int i = 0; i < num_rows; i++)
	{	
		vector<char> row;
		

		for (int j = 0; j < num_columns; j++)
		{
			int rnd = rand() % 2;
			if (rnd == 0) {
				row.push_back('X');
			}
			else {
				row.push_back(' ');
			}
		}

		grid1.push_back(row);
	}
	
}
void Grid::printMaze()
{
	for (int i = 0; i < num_rows; i++) {
		for (int j = 0; j < num_columns; j++) {
			cout << grid1[i][j];// .c_str();
		}
		cout << "\n";
	}
};

