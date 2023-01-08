#pragma once
#include"Solve.h"
#include<array>
#include <iostream>
#include<algorithm>
using namespace std;


	void Solve::printSolution()
	{

		//For-Loop to print our Solution-Path
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				cout << sol[i][j];

			}
			cout << endl;
		}
	}

	bool Solve::DFS(Grid& lab)
	{
		lab.getM();
		lab.getN();

		sol = new bool[lab.getM()][lab.getN()];

		//Solving Grid
		//int sol[N][M];
		//For Loop to set everthing on 0
		for (int x = 0; x < lab.getN(); x++)
		{
			for (int y = 0; y < lab.getM(); y++)
			{
				sol[x][y] = 0;
			}
		}
		//Printout Solution if solveMazeUtil(x,y) = goal, else "There is no Path to our goal"
		if (solveMazeUtil(0, 0) == false)
		{
			cout << "There is no Path to our goal";
			return false;
		}
		//Print Path
		printSolution();
		return true;
	}

	bool Solve::isSafe(int x, int y)
	{
		//if (x,y) is outside of the maze return false
		//This Method prevents our Solve Method to go out of Bounds
		if (x >= 0 && x < N && y >= 0 && y < M && array[x][y] == 1)
		{
			return true;
		}
		return false;
	}

	bool Solve::solveMazeUtil(int x, int y)
	{
		//Check for Goal, -1 because Arrays start at 0
		if (x == N - 1 && y == M - 1 && array[x][y] == 1)
		{
			sol[x][y] = 1;
			return true;
		}

		//Out-of-Bounds Method
		if (isSafe(x, y) == true)
		{
			if (sol[x][y] == 1)
			{
				return false;
			}
			//Set sol[x][y] to 1 to mark it as a possible Path
			sol[x][y] = 1;
			//Check for the Right
			if (solveMazeUtil(x + 1, y) == true)
			{
				return true;
			}
			//Check Down
			if (solveMazeUtil(x, y + 1) == true)
			{
				return true;
			}
			//Check for Left

			if (solveMazeUtil(x - 1, y) == true)
			{
				return true;
			}
			//Check for Up

			if (solveMazeUtil(x, y + 1) == true)
			{
				return true;
			}
			//Unmark the Solutionpath if none of the movements worked
			sol[x][y] = 0;
			return false;
		}
		return false;
	}
