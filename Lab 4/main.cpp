/*Andrew McDaniel, 10/13/26, Computer Science
this program will read tempature values from an infile and print out a bar-chart for a visualization */

#include <iostream>
#include <fstream>
#include <string.h>

// my prototypes //
int starCalc(int temp);
int chartMakePositive();
int chartMakeNegitive();

// the diffrent intergers that are used for the loops and calculations//
int temp;
int z;
int count;
float y;
int countDown;

// main function//
int main()
{
	//top range of graph//
	std::cout << "             -30    -20    -10   |     10     20    30     40     50     60     70     80    90    100    110    120" << std::endl;
	// the file stream comantd and the assingment of the first value //
	std::ifstream infile;
	infile.open("inputTemp.dat");
	infile >> temp;
	// the main loop that prints out all the bar-charts//
	while (infile)
	{
		// the check to make shure the temp is in the given range //
		if (temp > -31 and temp < 121)
		{
			std::cout << temp;
			// a call to the function that calculates the number of stars //
			starCalc(temp);
			// a group of code that makes shure the charts are even with eachother //
			if (temp < 10 and temp > 0)
				std::cout << "  ";
			else if (temp < 100 and temp > 10)
				std::cout << " ";
			else if (temp > -10 and temp < 0)
				std::cout << "   ";
			// a check which side of the | the stars go on //
			if (temp > 0)
			{
			chartMakePositive();
			}
			else if (temp < 0)
			{
			chartMakeNegitive();
			}
		}
		// the resule of a temp that is not in the given range of -30 to 120//
		else
		{
			std::cout << "invalid temp" << std::endl;
		}
		infile >> temp;
	}
	
	infile.close();
}

// the def of the starCalc function //
int starCalc(int temp)
{
	// the calculation of the number of stars for the given temp in the file
		if (temp < 0)
		{
			y = -temp / 3.0;
		}
		else if (temp > 0)
		{
			y = temp / 3.0;
		}
		
		if (y >= (temp / 3) + 0.5)
		{
			 z = y + 0.5;
		}
		else
		{
			 z = y;
		}
		return z;
}
// the def for printing a positive star chart //
int chartMakePositive()
{
	countDown = 30;
	count = 0;
	while (countDown != 0)
	{
		std::cout << ' ';
		countDown = countDown - 1;
	}
	std::cout << "|";
	while (count != z)
	{
		std::cout << "* ";
		count = count + 1;
	}
	std::cout << ' ' << std::endl;
	return 0;
}
// the def for printing a negitive star chart //
int chartMakeNegitive()
{
	countDown = 30 - (z*2);
	count = 0;
	while (countDown != 0)
	{
		std::cout << ' ';
		countDown = countDown - 1;
	}
	
	while (count != z)
	{
		std::cout << "* ";
		count = count + 1;
	}
	std::cout << "|";

	std::cout << ' ' << std::endl;
	return 0;
}