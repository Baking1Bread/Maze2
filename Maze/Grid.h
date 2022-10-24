#pragma once
#include <vector>
#include<array>
#include <iostream>
using namespace std;

class Grid
{
public:

	char Feld[20][20];
	char Char = '*';

	Grid()
	{

	};

	void generateMaze();
	void printMaze();

	

private:


};
