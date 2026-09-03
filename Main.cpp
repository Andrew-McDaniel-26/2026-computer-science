// in C++ comments are a // for single line comment and /**/ for multi line comments
/* this is a multi line comment */

// Andrew McDaniel ,computer science
#include <iostream>
// added to include Pi
#include <numbers>

// the functions used to calculate the indevidual problems Volume and Surface Area
float calculateVolume(float hight_, float Radius_);
float calculateSurfaceArea(float Radius_, float hight_);

int main()
{
	// the hight and Radus geiven value
	float hight = 3.5;
	float Radius = 8;

// the end result is given below
		std::cout << "The volume of a cylinder with a hight of " << hight << " and a radius of " << Radius << " is " << calculateVolume(hight, Radius) << std::endl;
		std::cout << "the Surface Area of a cylinder with the hight of " << hight << " and the Radius of " << Radius << " is " << calculateSurfaceArea(Radius, hight) << std::endl;
	return 0; 
}
// asigns a definition to the function calculateVolume
float calculateVolume(float hight_, float Radius_)
{
	// the calculation for Volume
	return std::numbers::pi * (Radius_ * Radius_) * hight_;
}
// asigns a definition to the function calculateSurfaceArea
float calculateSurfaceArea(float Radius_, float hight_)
{
	// the calculation for Surface Area
	return (2 * std::numbers::pi * Radius_ * hight_) + 2 * std::numbers::pi * (Radius_ * Radius_);
}