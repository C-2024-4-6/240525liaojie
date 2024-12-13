#include<iostream>
#include"mytriangle.h"

int main()
{
	double side1, side2, side3;
	std::cout << "请输入三角形的三条边长：";
	std::cin >> side1 >> side2 >> side3;

	if (is_valid(side1, side2, side3))
	{
		double triangleArea = area(side1, side2, side3);
		std::cout << "三角形的面积是" << triangleArea << std::endl;
	}
	else
	{
		std::cout << "输入的边长不合法，无法构成三角形。" << std::endl;
	}
	return 0;
}