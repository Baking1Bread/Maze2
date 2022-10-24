#pragma once
#include <vector>
#include<array>
#include <iostream>
using namespace std;

class Grid
{
public:

	vector<vector<char>>grid1;
	int num_rows = 20;
	int num_columns = 20;


	Grid()
	{

	};
	Grid(int num_rows, int num_columns);

	void generateMaze();
	void printMaze();

	

private:




	
	


};
