/*
Diego Acuna

*/

/*
This program will read the numbers
from a text file and validate the equation y = 5x + 7.

It will use files, a main function, loops, if/else statements and a subfunction
*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;


//prototype for the sub-function
bool checkEquation(int x, int y);

//main function

int main()
{
	//First thing, we must name the file and variables
	ifstream myInputFile;
	int xValue, yValue;

	//open the file
	myInputFile.open("pairs.txt");

	//using a while loop to assign values to x and y
	while (myInputFile >> xValue >> yValue)
	{
		//use if and else statments to call out the function checkEquation
		if (checkEquation(xValue, yValue))
		{
			cout << "Point (" << xValue << ", " << yValue << ") does satisfy equation y = 5x + 7." << endl; //displays if value is true
		}
		else
			cout << "Point (" << xValue << ", " << yValue << ") does NOT satisty equation y = 5x + 7." << endl; //displays the value is false
	}
	
	//close the file
	myInputFile.close();


	system("pause");
	return 0;
}


//sub function checkEquation
bool checkEquation(int x, int y)
{
	//use if and else staments to check values from file against the equation and return true/false accordingly
	if (y == (5 * x) + 7)
	{
		return true;
	}
	else
		return false;
}
