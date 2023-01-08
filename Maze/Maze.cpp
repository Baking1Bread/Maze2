#include"Maze.h"
#include<array>
#include <iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;



Grid::Grid(int N, int M) :N(N), M(M)
{
	int z = (N * M);
	grid = new bool[z];
	
	//Set all to Paths
	memset(grid, true, z);

	//srand-time creates a Seed for our rand
	//When using srand with time we get a random maze everytime
	srand(time(NULL));

	int x, y;

	int p = (N * M) / 5;

	for (int i = 0; i < p; i++)
	{
		//0 = Wall
		grid[rand() % z] = 0;
	}
	grid[z-1] = true;	//End
	grid[z - z] = true;	//Start
}


int Grid::getPosition()
{
	int x = M;
	int y = N;
	return x;
	return y;
}

void Grid::printGrid()
{
	//For-Loop to Print our Maze
	for (int i = 0; i < N; i++)
	{	
		cout << endl;
		for (int j = 0; j < M; j++)
		{
			cout << grid[i * M + j];
		}
	}
}



















/*

















Matrix::Matrix(int H, int W)
{
	//Variable int p spawns 20% Walls arround our Paths
	int p = (H * W) / 5;
	//srand-time creates a Seed for our rand
	//When using srand with time we get a random maze everytime
	srand(time(NULL));
	//For-Loop to set everything to Paths
	for (int x = 0; x < H; x++)
	{
		for (int y = 0; y < W; y++)
		{
			//1 = Path
			array[x][y] = 1;
		}
	}
	//For-Loop to set random Walls/Obstacles
	for (int i = 0; i < p; i++)
	{
		//0 = Wall
		array[rand() % H][rand() % W] = 0;
	}
	//Start-Point set to Path, make sure there is no Wall
	array[0][0] = 1;
	//End-Point set to Path, make sure there is no Wall
	array[H - 1][W - 1] = 1;

}
int Matrix::getPosition(int, int)
{
	return array[x][y];
}
void Matrix::printMatrix()
{	
	//For-Loop to Print our Maze
	for (int x = 0; x < H; x++)
	{
		for (int y = 0; y < W; y++)
		{
			cout << array[x][y];
		}
		cout << endl;
	}
};*/







