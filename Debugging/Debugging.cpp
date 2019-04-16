// Debugging.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


int main()
{
	int scores [10];
	int j = 0;
	

		
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Please enter your test scores: ";
		std::cin >> scores[i]; 
		if (scores[i] == 0)
			break;
	}
	
	int sum = 0, average = 0;
	for (int h = 0; h < 10; h++)
	{
		sum += scores[h];
	}

	average = sum / 10;
	std::cout << "Average = " << average;
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
