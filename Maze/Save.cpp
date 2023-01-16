#pragma once
#include <array>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <time.h>
#include "Save.h"

using namespace std;


Save::Save()
{
	myMazelist.open("Mazelist.txt", ios::app);
}
Save::~Save()
{
	myMazelist.close();
}
void Save::SaveGrid(const Grid& lab)
{
	//Time-Stamp
	time_t current_time;
	struct tm local_time;
	time(&current_time);
	localtime_s(&local_time, &current_time);

	int Year = local_time.tm_year + 1900;
	int Month = local_time.tm_mon + 1;
	int Day = local_time.tm_mday;

	int Hour = local_time.tm_hour;
	int Min = local_time.tm_min;
	int Sec = local_time.tm_sec;

	myMazelist << Hour << ":" << Min << endl;
	myMazelist << Day << ":" << Month << ":" << Year << endl;
	myMazelist << endl;

	for (int i = 0; i < lab.getHeight(); i++)
	{

		for (int j = 0; j < lab.getWidth(); j++)
		{
			myMazelist << lab.getGrid()[i * lab.getWidth() + j];
		}
		myMazelist << endl;
	}
	myMazelist << endl;
	
}
void Save::SavePath(const Solve& solve,const Grid& lab)
{
	//Save the current Solution in my .txt file

	for (int i = 0; i < lab.getHeight(); i++)
	{

		for (int j = 0; j < lab.getWidth(); j++)
		{
			myMazelist << solve.getSol()[i * lab.getWidth() + j];
		}
		myMazelist << endl;
	}
	myMazelist << endl;
}
