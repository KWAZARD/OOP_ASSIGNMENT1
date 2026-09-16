#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Board
{
private:
	int rows = 0;
	int cols = 0;
	std::vector<std::vector<std::string>> board;
	
	
	


public:
	Board(int userRows, int userCols) : rows(userRows), cols(userCols), board(rows, std::vector<std::string>(cols, " ")) { }

	void drawBoard() {

		std::cout << "   ";
		for (int col = 0; col < cols; col++)
		{
			if (col % 10 == 0)
			{
				std::cout << col / 10;
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << "\n   ";
		for (int col = 0; col < cols; col++) std::cout << col % 10;
		std::cout << "\n  +";
		for (int col = 0; col < cols; col++) std::cout << "-";
		std::cout << "+";
		std::cout << "\n";

		for (int row = 0; row < rows; row++)
		{
			if (row < 10) std::cout << "0";
			std::cout << row << "|";
			for (int col = 0; col < cols; col++)
			{
				std::cout << board[row][col];
			}
			std::cout << "|\n";
		}
		std::cout << "  +";
		for (int col = 0; col < cols; col++) std::cout << "-";
		std::cout << "+\n";
	}
};

