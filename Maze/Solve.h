#pragma once
#include<cstring>
#include<array>
#include<iostream>
#include<list>
#include"Maze.h"

using namespace std;


class Solve
{
public:

	void printSolution();				//Print our Path
	bool DFS(Grid &lab);							//Combines SolveMazeUtil with printSolution.

	bool solveMazeUtil(int x, int y);	//Recursive Method for (i+1,j) and (i,j+1)
	bool isSafe(int x, int y);			//Check for Boundaries
	
private:

	

	int* sol;						//Declares 2D Integer Array->Path
};

