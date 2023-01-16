#pragma once
#include<cstring>
#include<array>
#include<iostream>
#include<list>
#include"Maze.h"
#include <fstream>

using namespace std;


class Solve
{
public:

	void printSolution(int Width, int Height);		//Print our Path
	bool DFS(Grid& lab);							//Combines SolveMazeUtil with printSolution.
	bool solveMazeUtil(int x, int y, Grid& lab);	//Recursive Method for (i+1,j) and (i,j+1)
	bool isSafe(int x, int y, Grid& lab);			//Check for Boundaries
	bool* getSol() const { return sol; }
private:

	bool* sol;										//Declares 2D Integer Array->Path
	bool* history;
};