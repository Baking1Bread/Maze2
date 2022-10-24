#include"Grid.h"
#include<array>
#include<vector>
#include <iostream>
using namespace std;



void Grid::generateMaze()
{

	for (int i = 0; i < 20; i++)
	{	

		for (int j = 0; j < 20; j++)
		{
			int rnd = rand() % 3;

			if (rnd == 1) 
			{
				Feld[i][j] = 'X';
			}
			else if (rnd == 2) 
			{
				Feld[i][j] = ' ';
			}
			else
			{
				Feld[i][j] = ' ';
			}
		}
	}
	
}
void Grid::printMaze()
{
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {

			if (Feld[1][1])
			{	
				cout << Char;
				Feld[1][1] = false;

			}
			else
			{
				cout << Feld[i][j];
			}
			
		}
		cout << endl;
	}
};

