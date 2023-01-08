#pragma once
#include<cstring>
#include<vector>
#include<array>
#include<iostream>
#include<list>

using namespace std;


class Grid
{
public:
	Grid(int N, int M);
	void printGrid();
	int getN() { return N; }
	int getM() { return M; }
	int getPosition();
private:

	//N -- Number of Lines
	int N;
	//M -- Number of Columns
	int M;

	bool* grid;
};
