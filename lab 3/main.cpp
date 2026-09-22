/* Andrew Mcdaniel, Lab 3 Computer Science, 9/22/26
The purpous of this program is to find the mean and population standred deviation of four numbers from two diffrent sorces the conslole and a input file.
the two sets of four numbers are then put into calculations then the results are put out to two diffrent locations the numbers you imput through the console are outputed to the consle
the set of numbers inputed from the file ore outputed to a diffrent file */

#include <iostream>
#include <cmath>
#include <fstream>


// the prototypes for both the console and the file calculations of mean. //

float mean(int a, int b, int c, int d);
float fileMean(int tempInputA, int tempInputB, int tempInputC, int tempInputD);

// the prototypes for both the console and the file calcuations of population standerd deviation. //

float popStandDeviation(int a,int b, int c, int d);
float filePopDev(int tempInputA, int tempInputB, int tempInputC,int tempInputD);

// this program pulls the numbers form the file, ruins the calculations and out puts the results into a diffrent file, it also allows you to input four numbers and get the mean and population standerd deviation of the number //

int main()
{
	int a;
	int b;
	int c;
	int d;

	// gives instructions to the user //
	std::cout << "input 4 numbers for the program to calculate the mean and Pop Standered Deviation" << std::endl;

	// allows the user to assign a number to the four valuse used in the calculations//
	std::cin >> a;

	std::cin >> b;

	std::cin >> c;

	std::cin >> d;

	// the out put for the four numbers that you input through the screen of the two calculations. //
	std::cout << "the mean of " << a << " " << b << " " << c << " " << d << " is " << mean(a, b, c, d) << std::endl;
	std::cout << "the population standered deviation of " << a << " " << b << " " << c << " " << d << " is " << popStandDeviation(a, b, c, d) << std::endl;

	// puls the numbers from the input file and assighns them a variable
	std::ifstream infile;
	infile.open("inMeanStd.dat");

	int tempInputA, tempInputB, tempInputC, tempInputD;
	infile >> a;
	infile >> b;
	infile >> c;
	infile >> d;


	// sends the results of the file mean and population standered deviation to the outfile. //
	std::ofstream outfile;

	outfile.open("outMeanStd.dat");
	outfile << "the mean of " << mean(a,b,c,d);

	outfile << " and the population standard deviation of " << popStandDeviation(a,b,c,d);


	return 0;
}

// the calculation for the mean of the four numbers you input the the screen //
float mean(int a, int b, int c, int d)
{
	return (a + b + c + d) / 4.0;

}

// the calculation for the population standard deviation of the four numbers inputed through the screen. //
float popStandDeviation(int a, int b, int c, int d)
{
	float e = mean(a, b, c, d);
	return std::sqrt( ((a - e) * (a - e) + (b - e) * (b - e) + (c - e) * (c - e) + (d - e) * (d - e)) / 4);
}