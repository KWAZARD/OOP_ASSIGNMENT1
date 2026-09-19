#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <memory>

#include "Shape.h"
#include "Box.h"

class Board
{
private:
	int rows = 0;
	int cols = 0;
	std::vector<std::vector<char>> board;
	std::vector<std::unique_ptr<Shape>> shapes;
	
	
	


public:
	Board(int userRows, int userCols) : rows(userRows), cols(userCols), board(rows, std::vector<char>(cols, ' ')) {}

	void addShapeToBoard(std::unique_ptr<Shape> newShape)
	{
		shapes.push_back(std::move(newShape));
	}
	void drawShapesInBoard()
	{
		for (int i = 0; i < shapes.size(); i++)
		{
			
			if (Box* box = dynamic_cast<Box*>(shapes[i].get()))
			{
				bool isFilled = box->get_isFilled();
				int size = box->get_side();
				int x = box->get_point().get_x();
				int y = box->get_point().get_y();
				if (isFilled)
				{
					
					for (int row = y; row < y+size; row++)
					{
						for (int col = x; col < x+size; col++)
						{
							board[row][col] = colorChar(box);
						}
					}
				}
				else
				{
					for (int row = y; row < y + size; row++)
					{
						board[row][x] = colorChar(box);
					}
					for (int col = x; col < x + size; col++)
					{
						board[y][col] = colorChar(box);
					}
					for (int col = x; col < x + size; col++)
					{
						board[y+size-1][col] = colorChar(box);
					}
					for (int row = y; row < y + size; row++)
					{
						board[row][x + size - 1] = colorChar(box);
					}
				}

			}
		}
	}
	char colorChar(Shape* shape)
	{

		if (shape->get_color() == "blue")
		{
			return 'b';
		}
		else if (shape->get_color() == "red")
		{
			return 'r';
		}
		else if (shape->get_color() == "yellow")
		{
			return 'y';
		}

	}

	// Method that draws board
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

		// ADD SHAPED TO BOARD BEFORE DRAWING IT
		drawShapesInBoard();

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

