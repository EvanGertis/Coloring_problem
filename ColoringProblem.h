#pragma once
#include "pch.h"

namespace CP {
	class ColoringProblem
	{
		//stores the vertecies and edges from the graph in a matrix structure. 
		std::vector<std::vector<int>> graphMatrix;

		//number of colors in the problem.
		int numOfColors;

		//use a vector of integers to represent colors.
		std::vector<int> colors;

	public:
		ColoringProblem(const std::vector<std::vector<int>> &graph, int _numOfColors);
		
		//solve the coloring problem
		
		~ColoringProblem();

	private:

		//recusive function for solving the problem.
		bool solve(std::size_t nodeIndex);

		//checks if the adjacent vertecies are the same color.
		bool isColorValid(std::size_t nodeIndex, std::size_t colorIndex);

		//prints out the result.
		void showResult();

	};
}