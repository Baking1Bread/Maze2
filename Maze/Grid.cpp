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

	bool pathblocked;
	bool Exitfound = false;

	//Check Up
	do {
		for ( )//grid[Opos.x][Opos.y], grid[Npos.newX][Npos.newY])
		{
			if (grid[0][+1] == true) //Wall
			{
				pathblocked = true;
				deadends.push_back(deadend);
			}
			else if (grid[0][+1] == false)//Path
			{
				pathblocked = false;
				paths.emplace_back();
				paths.back().push_back(path);
				return;
			}
			else 
			{	
				if (grid[0][+1] == grid[columns - 1][rows - 1])//End
					Exitfound = true;
			}
			//Check Down
			if (grid[0][-1] == true) //Wall
			{
				pathblocked = true;
				deadends.push_back(deadend);
			}
			else if (grid[0][+1] == false)//Path
			{
				pathblocked = false;
			}
			else
			{
				if (grid[0][+1] == grid[columns - 1][rows - 1])//End
					Exitfound = true;
			}
			//Check Left
			if (grid[-1][0] == true) //Wall
			{
				pathblocked = true;
				deadends.push_back(deadend);
			}
			else if (grid[0][+1] == false)//Path
			{
				pathblocked = false;
			}
			else
			{
				if (grid[0][+1] == grid[columns - 1][rows - 1])//End
					Exitfound = true;
			}
			//Check Right
			if (grid[+1][0] == true) //Wall
			{
				pathblocked = true;
				deadends.push_back(deadend);
			}
			else if (grid[0][+1] == false)//Path
			{
				pathblocked = false;
			}
			else
			{
				if (grid[0][+1] == grid[columns - 1][rows - 1])//End
					Exitfound = true;
			}
		}
	} while (!Exitfound);
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



