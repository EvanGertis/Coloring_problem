#pragma once
#include "pch.h"


CP::ColoringProblem::ColoringProblem(const std::vector<std::vector<int>> &graph, int _numOfColors)
	: graphMatrix(graph), 
	  numOfColors(_numOfColors)
{	
	//reset the size of the color vector based on the dimensions of the graph matrix
	colors.resize(graphMatrix.size());

	if (solve(0)) {
		showResult();
	}
	else {
		std::cout << "no solution with the given parameters..\n";
	}
}

CP::ColoringProblem::~ColoringProblem()
{
}

bool CP::ColoringProblem::solve(std::size_t nodeIndex)
{
	return false;
}

// function to check whether or the solution is valid or not.
bool CP::ColoringProblem::isColorValid(std::size_t nodeIndex, std::size_t colorIndex)
{
	for (std::size_t i = 0; i < this->graphMatrix.size(); i++) {
		
		if (this->graphMatrix[nodeIndex][i] == 1 && colorIndex == colors[i]) {
			return false;
		}
	}

	return true;
}

//prints out the result.
void CP::ColoringProblem::showResult() {
	for (std::size_t i = 0; i < graphMatrix.size(); i++) {
		std::cout << "Node " << (i + 1) << " has color index: " << colors[i] << "\n";
	}
	std::cout << "\n";
}