// OOP_Assignmen1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Board.h"

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
	Board board(20, 50);
	std::vector<std::vector<std::string>> stringVector;
	std::string userInput;
	std::string inputType;
	while (true)
	{
		std::cout << ">> ";
		std::cin >> inputType;
		if (inputType == "add")
		{
			std::getline(std::cin, userInput);

			stringVector.push_back(splitStr(userInput, ' '));
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
void addShape()
{

}

