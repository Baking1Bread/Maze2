#include"Maze.h"
#include<array>
#include <iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;



Grid::Grid(int Height, int Width) :Height(Height), Width(Width)
{
	int z = Height * Width;

	grid.resize(z);

	//Set all to Paths
	fill(grid.begin(), grid.end(), true);

	//srand-time creates a Seed for our rand
	//When using srand with time we get a random maze everytime
	srand(time(NULL));

	int x, y;

	int p = (Height * Width) / 5;

	for (int i = 0; i < p; i++)
	{
		//0 or false = Wall
		grid[rand() % z] = false;
	}
	grid[z - 1] = true;	//End
	grid[z - z] = true;	//Start
}


int Grid::getPosition()
{
	int x = Width;
	int y = Height;
	return x;
	return y;
}

void Grid::printGrid()
{
	//For-Loop to Print our Maze
	for (int i = 0; i < Height; i++)
	{
		for (int j = 0; j < Width; j++)
		{
			cout << grid[i * Width + j];
		}
		cout << endl;
	}
	cout << endl;
}
