#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	for (int day = 9; day >= 1; day--)
	{
		a = (a + 1) * 2;
	}
	cout << "第一天摘的桃子数为：" << a << endl;
	return 0;
}