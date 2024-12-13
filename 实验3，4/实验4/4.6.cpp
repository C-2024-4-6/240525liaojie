/*#include<iostream>
#include<cstring>
using namespace std;

void count(const char s[], int counts[])
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] - 'a' == j)
			{
				counts[j]++;
			}
			if (s[i] - 'A' == j)
			{
				counts[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		char w = i + 97;
		if (counts[i] != 0)
		{
			cout << w << ":" << counts[i] << " times" << endl;
		}
	}
}

int main()
{
	char c[100];
	cout << "Enter a string:";
	cin.getline(c, 100);
	int counts[26] = { 0 };
	count(c, counts);

	return 0;
}*/