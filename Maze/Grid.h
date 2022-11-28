#pragma once
#include<cstring>
#include<vector>
#include<array>
#include<iostream>
#include<list>
#include"Node.h"

#define N 10
#define M 10
using namespace std;

class Labyrinth
{
public:

	Labyrinth();						//Generates our Maze with Walls and Paths
	void printArrayMaze();				//Prints our Maze
	void printSolution();				//Print our Path
	bool solveMaze();					//Combines SolveMazeUtil with printSolution.
	bool isSafe(int x, int y);			//Check for Boundaries
	bool solveMazeUtil(int x, int y);	//Recursive Method for (i+1,j) and (i,j+1)

	int array[N][M]{ 0 };				//Declares 2D Integer Array->Maze
	int sol[N][M]{ 0 };					//Declares 2D Integer Array->Path

private:


};
