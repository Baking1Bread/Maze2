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

	Labyrinth();
	void printArrayMaze();
	void printSolution(); 
	bool solveMaze();
	bool isSafe(int x, int y);
	bool solveMazeUtil(int x, int y);
	int array[N][M]{ 0 };
	int sol[N][M]{ 0 };

private:


	//int n = N;
	//int m = M;

	//Defines End
	//int fx = 0, fy = 0;


	/*
	struct Point
	{
		int x = 0;
		int y = 0;
	};
	Point Start;
	Point End;

	unsigned int rows = 0;
	unsigned int columns = 0;

	std::vector<std::vector<int>>grid;
	*/


};
