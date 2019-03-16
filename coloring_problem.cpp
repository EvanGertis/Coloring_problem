/*
File Name: coloring_problem.cpp
Author: Evan Gertis.
Date: 03/15/2019
Purpose: Solve the NP complete coloring problem. Also known as, vertex coloring problem.
The smallest number of colors needed to color a graph G is called its chromatic number.
There may be more that one solution.
*/
#include "pch.h"
#include <iostream>

int main()
{											  //A, B, C, D, E, F
	const std::vector<std::vector<int>> graph{ {1, 1, 1, 1, 0, 0}, //A 
											   {1, 1, 1, 0, 1, 1}, //B
											   {1, 1, 1, 1, 0, 1}, //C
											   {1, 0, 1, 1, 0, 1}, //D
											   {0, 0, 0, 0, 1, 1}, //E
											   {0, 1, 1, 1, 1, 1}}; //F
	constexpr int numOfColors = 4;

	CP::ColoringProblem problem(graph, numOfColors);
	problem();
}
