#include<iostream>
#include"mytriangle.h"

int main()
{
	double side1, side2, side3;
	std::cout << "�����������ε������߳���";
	std::cin >> side1 >> side2 >> side3;

	if (is_valid(side1, side2, side3))
	{
		double triangleArea = area(side1, side2, side3);
		std::cout << "�����ε������" << triangleArea << std::endl;
	}
	else
	{
		std::cout << "����ı߳����Ϸ����޷����������Ρ�" << std::endl;
	}
	return 0;
}