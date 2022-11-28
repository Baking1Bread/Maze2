#include <iostream>
#include<cstdlib>
#include"Grid.h"
#include<array>
#include<vector>


using namespace std;


int main()
{	
	Labyrinth lab;
	lab.printArrayMaze();
	cout << endl;
	lab.solveMaze();
	
	


}

