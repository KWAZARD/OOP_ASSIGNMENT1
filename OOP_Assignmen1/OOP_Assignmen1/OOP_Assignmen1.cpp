// OOP_Assignmen1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <vector>
#include <string>
#include <sstream>

#include "Board.h"
#include "Shape.h"
#include "Box.h"
#include "Rectangle.h"

std::vector<std::string> splitStr(const std::string& str, const char spliterChar)
{
	std::vector<std::string> resultVector;
	std::stringstream stream(str);
	std::string word;
	while (std::getline(stream, word, spliterChar))
	{
		resultVector.push_back(word);
	}
	return resultVector;
}



int main()
{
	Board board(25, 80);
	
	std::string userInput;
	std::string inputType;
	while (true)
	{
		
		std::cout << ">> ";
		std::cin >> inputType;
		if (inputType == "add")
		{
			std::cin >> std::ws;
			std::getline(std::cin, userInput);

			std::vector<std::string> stringVector = splitStr(userInput, ' ');

			bool isFilled = false;
			if (stringVector[0] == "filled")
			{
				isFilled = true;
			}

			if (stringVector[1] == "box")
			{
				int x = std::stoi(stringVector[3]);
				int y = std::stoi(stringVector[4]);
				int size = std::stoi(stringVector[5]);
				if (x <= board.get_cols() && y <= board.get_rows())
				{
					board.addShapeToBoard(std::make_unique<Box>(isFilled, stringVector[2], Point(x, y), size));
				}
				
			}
			else if (stringVector[1] == "rec")
			{
				int x = std::stoi(stringVector[3]);
				int y = std::stoi(stringVector[4]);
				int height = std::stoi(stringVector[5]);
				int width = std::stoi(stringVector[6]);
				if (x <= board.get_cols() && y <= board.get_rows())
				{
					board.addShapeToBoard(std::make_unique<Rectangle>(isFilled, stringVector[2], Point(x, y), height, width));
				}
			}

		}
		else if (inputType == "draw")
		{
			board.drawBoard();
		}
		else if (inputType == "list")
		{

		}
		else if (inputType == "shapes")
		{

		}
		else if (inputType == "select")
		{

		}
		else
		{
			std::cout << "Wrong input!!!";
		}
		
	}
}


