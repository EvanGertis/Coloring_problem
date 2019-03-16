#pragma once
#include "pch.h"


CP::ColoringProblem::ColoringProblem(const std::vector<std::vector<int>> &graph, int _numOfColors)
	: graphMatrix(graph), 
	  numOfColors(_numOfColors)
{	
	//reset the size of the color vector based on the dimensions of the graph matrix
	colors.resize(graphMatrix.size());
}


CP::ColoringProblem::~ColoringProblem()
{
}