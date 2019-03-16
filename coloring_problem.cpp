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
{
	const std::vector<std::vector<int>> graph{ {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
	int _numOfColors = 3;

	CP::ColoringProblem problem(graph, _numOfColors);
}
