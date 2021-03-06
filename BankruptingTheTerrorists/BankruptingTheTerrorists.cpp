// BankruptingTheTerrorists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

//Functions
//Declare before main so that it recognizes them.
void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{

	int myScore = 150;									//Declare and init var
	int yourScore = 1000;								//Declare and init var
	cout << "Original Balances:\n";						//Print out original values
	cout << "Joe's Coffee Shop: $" << myScore << endl;	//Print out original values
	cout << "Bank of Terror: $" << yourScore << "\n\n";	//Print out original values
	cout << "Running Normal Transaction\n";				//Calling badSwap Function
	badSwap(myScore, yourScore);						//Calling badSwap Function
	cout << "Joe's Coffee Shop: $" << myScore << endl;	//Print out original values
	cout << "Bank of Terror: $" << yourScore << "\n\n";	//Print out original values
	cout << "Running Hacked Transaction\n";				//Calling badSwap Function
	goodSwap(myScore, yourScore);						//Calling goodSwap Function
	cout << "Joe's Coffee Shop: $" << myScore << endl;	//Print out original values
	cout << "Bank of Terror: $" << yourScore << "\n\n";	//Print out original values
	system("pause");
	return 0;
}

void badSwap(int x, int y)		//Takes a copy of the values passed in
{
	int temp = x;	//Assign X's value to temp to hold
	x = y;			//Assign Y's value to X to hold
	y = temp;		//Assign temp's value to Y to hold
}

void goodSwap(int& x, int& y)	//Takes a reference to the values passed in
{
	int temp = x;	//Assign X's value to temp to hold
	x = y;			//Assign Y's value to X to hold
	y = temp;		//Assign temp's value to Y to hold
}

