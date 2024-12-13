#include<iostream>
using namespace std;

int main()
{
	int num[10], distinct[10], count = 0;
	cout << "Enter ten numbers";
	for (int i = 0; i < 10 ;i++)
	{
		cin >> num[i];
		bool isDistinct = true;
		for (int j = 0; j < count; j++)
		{
			if (num[i] == distinct[j])
			{
				isDistinct = false;
				break;
			}
		}
		if (isDistinct)
		{
			distinct[count++] = num[i];
		}
	}
	cout << "The distinct numbers are:";
		for (int i = 0; i < count; i++)
		{
			cout << distinct[i] << "";
		}
		cout << endl;

		return 0;
}