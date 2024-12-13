#include<iostream>
using namespace std;
void swap(double& a, double& b)
{
	double n;
	if (a > b)
	{
		n = a;
		a = b;
		b = n;
	}
}
int main()
{
	double p[10];
	cout << "ÇëÊäÈë10¸öÊý£º";
	for (int j = 0; j < 10; j ++ )
	{
		cin >> p[j];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (p[j] > p[j + 1])
			{
				swap(p[j], p[j + 1]);
				changed = true;
			}
		}
	} while (changed);
	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << "\t";
	}
}