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
	
	void drawBorders()
	{

		for (int col = 3; col < cols-1; col++)
		{
			//draw dashes in cols
			board[2][col] = "-";
			board[rows - 1][col] = "-";

			// draw numbers in cols
			int offsetCols = col - 3;
			if (offsetCols % 10 == 0)
			{
				board[0][col] = std::to_string(offsetCols / 10);
			}

			board[1][col] = std::to_string(offsetCols % 10);
			
		}

		for (int row = 3; row < rows - 1; row++)
		{
			//draw pipes in rows
			board[row][2] = "|";
			board[row][cols - 1] = "|";

			// draw numbers in rows
			int offsetRow = row - 3;
			if (offsetRow <= 9)
			{
				board[row][0] = "0";
				board[row][1] = std::to_string(offsetRow);
				
			}
			else
			{
				board[row][0] = std::to_string(offsetRow / 10);
				board[row][1] = std::to_string(offsetRow % 10);
			}
		}
		board[2][2] = "+";
		board[rows - 1][2] = "+";
		board[2][cols - 1] = "+";
		board[rows - 1][cols - 1] = "+";
	}
	


public:
	Board(int userRows, int userCols) : rows(userRows + 4), cols(userCols + 4), board(rows, std::vector<std::string>(cols, " ")) {
		drawBorders();
	}

	void drawBoard() {
		for (size_t row = 0; row < rows; row++)
		{
			for (size_t col = 0; col < cols; col++)
			{
				std::cout << board[row][col];
			}
			std::cout << "\n";
		}
		std::cout << "\n";
	}
};

