// in C++ comments are a // for single line comment and /**/ for multi line comments
/* this is a multi line comment */

// Andrew McDaniel ,computer science
#include <iostream>
#include <numbers>
float calculateVolume(float hight_, float Radius_);
float calculateSurfaceArea(float Radius_, float hight_);

int main()
{
	float hight = 3.5;
	float Radius = 8;
		std::cout << "The volume of a cylinder with a hight of " << hight << " and a radius of " << Radius << " is " << calculateVolume(hight, Radius) << std::endl;
		std::cout << "the Surface Area of a cylinder with the hight of " << hight << " and the Radius of " << Radius << " is " << calculateSurfaceArea(Radius, hight) << std::endl;
	return 0; 
}

float calculateVolume(float hight_, float Radius_)
{
	return std::numbers::pi * (Radius_ * Radius_) * hight_;
}

float calculateSurfaceArea(float Radius_, float hight_)
{
	return (2 * std::numbers::pi * Radius_ * hight_) + 2 * std::numbers::pi * (Radius_ * Radius_);
}