#pragma once
#include <vector>
#include<array>
#include <iostream>
using namespace std;

class Labyrinth
{
public:

	Labyrinth(unsigned int rows,unsigned int columns,int fill);
	
	void printMaze();
	void setStart(int x,int y);
	void setEnd(int x,int y);
	
	void search(unsigned int rows, unsigned int columns);

private:
	struct pos
	{
		unsigned int x = 0;
		unsigned int y = 0;
	};

	unsigned int rows;
	unsigned int columns;
	
	pos Start;
	pos End;
	pos movefwd;
	vector <vector<bool>>grid;

	vector <vector<pos>>paths;

	vector<pos>visited;

};
