
#include "Maze.h"
#include <array>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <time.h>
using namespace std;



Grid::Grid(int Height, int Width) :Height(Height), Width(Width)
{
	int z = (Height * Width);
	grid = new bool[z];

	//Set all to Paths
	memset(grid, true, z);

	//srand-time creates a Seed for our rand
	//When using srand with time we get a random maze everytime
	srand(time(NULL));

	int x, y;

	int p = (Height * Width) / 5;

	for (int i = 0; i < p; i++)
	{
		//0 = Wall
		grid[rand() % z] = 0;
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
