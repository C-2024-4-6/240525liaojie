#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	bool a[100] = { false };

	for (int n = 1; n <= 100; n++)
	{
		for (int m = n - 1; m <= 100; m += n)
		{
			a[m] = !a[m];
		}
	}

	for (int x = 0; x <= 100; x++)
	{
		if (a[x])
		{
			cout << x << "\t";
		}
	}
}
