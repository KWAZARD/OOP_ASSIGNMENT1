// OOP_Assignmen1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

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
	std::vector<std::vector<std::string>> stringVector;
	std::string userInput;
	while (true)
	{
		std::cout << "> ";
		std::cin >> userInput;
		stringVector.push_back(splitStr(userInput, ' '));
	}
}

