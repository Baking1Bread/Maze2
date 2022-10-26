#include"Grid.h"
#include<array>
#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;


Labyrinth::Labyrinth(const unsigned int rows, const unsigned int columns,int fill)
{	

	this->rows = rows;
	this->columns = columns;

	//Initialization Start x(first) & Start y(second)
	Start.x = 0;
	Start.y = 0;
	End.x = columns-1;
	End.y = rows-1;

	for (int i = 0; i < rows; i++)
	{
		grid.push_back(vector<bool>());

		for (int j = 0; j < columns; j++)
		{	

			int rnd = rand() % fill;
			if (rnd == 1)
			{	
				//True = Wall
				grid[i].push_back(true);
			}
			else
			{
				//False = Path
				grid[i].push_back(false);
			}
			
		}
	}
	grid[0][0] = false;
	grid[columns-1][rows-1]= false;
}

void Labyrinth::search(unsigned int rows, unsigned int columns)
{	
	//Position Up
	Up.x = 0;
	Up.y = +1;
	//Position Down
	Down.x = 0;
	Down.y = -1;
	//Position Left
	Left.x = -1;
	Left.y = 0;
	//Position Right
	Right.x = +1;
	Right.y = 0;


};

void Labyrinth::getneighbours()
{
	for ()
	{

	}
};

void Labyrinth::printMaze()
{	
	for (int x = 0; x < rows; x++) 
	{
		for (int y = 0; y < columns; y++)
		{	
			if (Start.x == x && Start.y == y)
			{
				cout << "S";
			}
			else if (End.x == x && End.y == y)
			{
				cout << "E";
			}
			else if (grid[x][y] == true)
			{
				cout << "x";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
};



