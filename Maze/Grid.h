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
	//Suchfunktion für die angrenzenden Punkte
	void search(unsigned int rows, unsigned int columns);
private:
	struct pos
	{
		unsigned int x = 0;
		unsigned int y = 0;
	};
	//Neue Position nach Search Fkt.
	struct newpos
	{
		int newX = 0;
		int newY = 0;
	};

	unsigned int rows;
	unsigned int columns;

	//Start & End Punkt
	pos Start;
	pos End;

	newpos Npos;
	pos Opos;

	pos deadend;
	
	pos path;

	pos visit;

	//Grid-Vector
	vector <vector<bool>>grid;

	//Liste mit den gespeicherten moeglichen Pfaden
	vector <vector<pos>>paths;

	//Liste mit den gespeicherten moeglichen Pfaden
	vector<pos>deadends;

	//Vector mit schon besuchten Punkten
	vector<pos>visited;

	//Vector fuer Offsets um die Surroundings zu checken
	//Up, Down, Left, Right
	//vector<vector<int>>xyoffsets = { {0,+1},{0,-1},{-1,0},{+1,0} };
};
