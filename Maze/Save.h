#pragma once
#include <array>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <time.h>
#include "Maze.h"
#include "Solve.h"

using namespace std;


class Save
{
public:
	Save();
	~Save();
	void SaveGrid(const Grid& lab);
	void SavePath(const Solve& solve,const Grid& lab);
private:
	ofstream myMazelist;
}; 
