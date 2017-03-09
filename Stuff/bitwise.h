#pragma once
#include <iostream>

inline void bitwiseBasic()
{
	const int CAP = 10;
	int bitArr[CAP] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < CAP; i++)
	{
		std::cout << (bitArr[i] & 1) << " ";
	}
	std::cout << "\n";
	//outputs 0,1,0,1,0,1,0,1,0,1
	//00
	//01
	//AND => 00

	//01
	//01
	//AND => 01



	for (int i = 0; i < CAP; i++)
	{
		std::cout << (bitArr[i] & 2) << " ";
	}
	std::cout << "\n";
	//outputs 0, 0, 2, 2, 0, 0, 2, 2, 0, 0
	//00
	//10
	//AND => 00

	//01
	//10
	//AND => 00

	//00
	//01
	//AND => 00

	//10
	//10
	//AND => 10

	//11
	//10
	//AND => 10

	for (int i = 0; i < CAP; i++)
	{
		std::cout << (bitArr[i] & 3) << " ";
	}
	//outputs 0, 1, 2, 3, 0, 1, 2, 3, 0, 1
	//00
	//11
	//AND => 00

	//01
	//11
	//AND => 01

	//osv...

	std::cout << "\n";
}