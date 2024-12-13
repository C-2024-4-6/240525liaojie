#include"mytriangle.h"
#include<cmath>
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double area(double side1, double side2, double side3)
{
	double l =(side1 + side2 + side3) / 2;
	return sqrt(l*(l - side1)*(l - side2)*(l - side3));
}
