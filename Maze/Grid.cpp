#include"Grid.h"
#include<array>
#include<vector>
#include <iostream>
#include<algorithm>
#include<queue>
#include<list>
#include<stack>
using namespace std;


Labyrinth::Labyrinth()
{	
	int p = (N * M)/10;
	srand(time(NULL));
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < M; y++)
		{
			array[x][y] = 1;
		}
	}
	//Set Walls in Grid
	for (int i = 0; i < p; i++)
	{
		array[rand() % N][rand() % M] = 0;
	}

	array[0][0] = 1; //Start-Point
	array[N - 1][M - 1] = 1; //End-Point
}

void Labyrinth::printArrayMaze()
{
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < M; y++)
		{
			cout << array[x][y];
		}
		cout << endl;
	}
};

void Labyrinth::printSolution()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout <<sol[i][j];
			
		}
		cout << endl;
	}
}

bool Labyrinth::isSafe(int x, int y)
{
	//if (x,y) is outside of the maze return false
	if (x >= 0 && x < N && y >= 0 && y < M && array[x][y] == 1)
	{
		return true;
	}
	return false;
}

bool Labyrinth::solveMaze()
{
	int sol[N][M];
	//memset(sol, 0, sizeof(sol));
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < M; y++)
		{
			sol[x][y] = 0;
		}
	}
	if (solveMazeUtil(0, 0) == false)
	{
		cout << "There is no Solution";
		return false;
	}
	printSolution();
	return true;
}

bool Labyrinth::solveMazeUtil(int x, int y)
{
	//Check for Goal
	if (x == N - 1 && y == M - 1 && array[x][y] == 1)
	{
		sol[x][y] = 1;
		return true;
	}


	if (isSafe(x, y) == true)
	{
		if (sol[x][y] == 1)
		{
			return false;
		}
		sol[x][y] = 1;
		if (solveMazeUtil(x + 1, y) == true)
		{
			return true;
		}
		if (solveMazeUtil(x, y + 1) == true)
		{
			return true;
		}
		sol[x][y] = 0;
		return false;
	}
	return false;
}

/*Labyrinth::Labyrinth(const unsigned int rows, const unsigned int columns, int fill)
{

	this->rows = rows;
	this->columns = columns;

	//Initialization Start x(first) & Start y(second)
	Start.x = 0;
	Start.y = 0;
	End.x = columns-1;
	End.y = rows-1;

	for (int i = 0; i < rows; i++)
	{
		grid.push_back(vector<int>());

		for (int j = 0; j < columns; j++)
		{

			int rnd = rand() % fill;
			if (rnd == 1)
			{
				//1 = Wall
				grid[i].push_back(1);
			}
			else
			{
				//0 = Path
				grid[i].push_back(0);
			}

		}
	}
	grid[0][0] = 2; //Start-Punkt
	grid[columns-1][rows-1]= 3;//End-Punkt
}*/
//----------------//
//Check for Path  //
//----------------//
/*bool Labyrinth::isReachable()
{
	//Starting at 0,0
	int i = 0, j = 0;
	//Set Finish
	fx = N - 1;
	fy = M - 1;
	//Set the visiting Array to true
	memset(visited, true, sizeof(visited));

	stack<Node> s;

	Node temp(i, j);

	s.push(temp);


	while (!s.empty())
	{
		// Pop the top node and move to the
		// left, right, top, down or retract
		// back according the value of node's
		// dir variable.
		temp = s.top();
		int d = temp.dir;

		i = temp.x, j = temp.y;

		temp.dir++;
		//Remove Top Element
		s.pop();
		//Insert Element
		s.push(temp);

		//Check if we found the End
		if (i == fx && j == fy)
		{
			return true;
		}

		//Checking UP
		if (d == 0)
		{
			if (i - 1 >= 0 && array[i - 1][j] && visited[i - 1][j])
			{
				Node temp1(i - 1, j);
				visited[i - 1][j] = false;
				//Insert temp1 to Stack s
				s.push(temp1);
			}
		}
		//Checking Left
		else if (d == 1)
		{
			if (j - 1 >= 0 && array[i][j - 1] && visited[i][j - 1])
			{
				Node temp1(i + 1, j);
				visited[i + 1][j] = false;
				//Insert temp1 to Stack s
				s.push(temp1);
			}
		}
		//Checking Down
		else if (d == 2)
		{
			if (i + 1 < n && array[i + 1][j] && visited[i + 1][j])
			{
				Node temp1(i + 1, j);
				visited[i + 1][j] = false;
				//Insert temp1 to Stack s
				s.push(temp1);
			}
		}
		//Checking Right
		else if (d == 3)
		{
			if (j + 1 < m && array[i][j + 1] && visited[i][j + 1])
			{
				Node temp1(i , j + 1);
				visited[i][j + 1] = false;
				//Insert temp1 to Stack s
				s.push(temp1);
			}
		}
		//Go back if no Path was found
		else
		{
			visited[temp.x][temp.y] = true;
			//cout << s.size()<<endl;
			//Remove Top Element from Stack
			s.pop();
		}
	}
	return false;
}*/
/*void Labyrinth::printMaze()
{	
	for (int x = 0; x < rows; x++) 
	{
		for (int y = 0; y < columns; y++)
		{	
			if (Start.x == x && Start.y == y)
			{
				cout << "S";
			}
			else if (End.x == x && End.y == y)
			{
				cout << "E";
			}
			else if (grid[x][y] == 1)
			{
				cout << "x";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}*/




