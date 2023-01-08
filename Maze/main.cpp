#include <iostream>
#include<cstdlib>
#include"Maze.h"
#include"Solve.h"
#include<array>
#include<vector>


using namespace std;


int main()
{	
	Grid lab(10, 10);
	lab.printGrid();
	Solve solve;
	solve.DFS(lab);


}

