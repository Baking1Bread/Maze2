#pragma once
#include"Solve.h"
#include<array>
#include <iostream>
#include<algorithm>
#include <fstream>
#include<iomanip>
using namespace std;


void Solve::printSolution(int Width, int Height)
{

	//For-Loop to print our Solution-Path
	for (int i = 0; i < Height; i++)
	{

		for (int j = 0; j < Width; j++)
		{
			cout<< sol[i * Width + j];
		}
		cout << endl;
	}
	cout << endl;


}

bool Solve::DFS(Grid& lab)
{
	lab.getWidth();
	lab.getHeight();

	sol = new bool[lab.getWidth()*lab.getHeight()];

	//Solving Grid
	//int sol[N][M];
	//For Loop to set everthing on 0

	for (int i = 0; i < lab.getHeight(); i++)
	{
		
		for (int j = 0; j < lab.getWidth(); j++)
		{
			sol[i * lab.getWidth() + j] = 0;
		}
	}

	//Printout Solution if solveMazeUtil(x,y) = goal, else "There is no Path to our goal"
	if (solveMazeUtil(0, 0, lab) == false)
	{
		cout << "There is no Path to our goal";
		return false;
	}
	//Print Path
	printSolution(lab.getWidth(),lab.getHeight());
	return true;
}

bool Solve::isSafe(int x, int y,Grid& lab)
{
	//if (x,y) is outside of the maze return false
	//This Method prevents our Solve Method to go out of Bounds
	bool* gridd = lab.getGrid();
	if (x >= 0 && x < lab.getWidth() && y >= 0 && y < lab.getHeight() && lab.getGrid()[y * lab.getWidth() + x] == 1)
	{
		return true;
	}
	return false;
}

bool Solve::solveMazeUtil(int x, int y, Grid& lab)
{	
	int index = y * lab.getWidth() + x;

	//Check for Goal, -1 because Arrays start at 0
	if (index == lab.getWidth()*lab.getHeight()-1)
	{
		sol[index] = 1;
		return true;
	}

	//Out-of-Bounds Method
	if (isSafe(x, y, lab))
	{
		if (sol[index] == 1)
		{
			return false;
		}
		//Set sol[x][y] to 1 to mark it as a possible Path
		sol[index] = 1;
		//Check for the Right
		if (solveMazeUtil(x + 1, y, lab) == true)
		{
			return true;
		}
		//Check Down
		if (solveMazeUtil(x, y + 1, lab) == true)
		{
			return true;
		}
		//Check for Left

		if (solveMazeUtil(x - 1, y, lab) == true)
		{
			return true;
		}
		//Check for Up

		if (solveMazeUtil(x, y + 1, lab) == true)
		{
			return true;
		}
		//Unmark the Solutionpath if none of the movements worked
		sol[index] = 0;
		return false;
	}
	return false;
}