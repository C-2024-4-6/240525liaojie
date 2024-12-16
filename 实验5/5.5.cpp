#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x = 60, int y = 80)
	{
		this->x = x, this ->y = y;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		std::cout << "(" << x << "," << y << ")" << std::endl;
	}
};
int main()
{
	Point p;
	p.display();
	p.setPoint(10, 20);
	p.display();
	return 0;
}