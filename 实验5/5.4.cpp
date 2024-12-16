#include<iostream>
using namespace std;
class student
{
public:
	student(int n, float s):num(n),score(s)
	{}
	int num;
	float score;
	void max(student* arr)
	{
		float max_score = arr[0].score;
		int k = 0;
		for (int i = 1; i < 5; i++)
		{
			if (arr[i].score > max_score)
			{
				max_score = arr[i].score;
				k = i;
			}
		}
		cout << arr[k].num << endl;
	}
};
int main()
{
	student stud[5] = { student(1,99),student(2,97),student(3,100),student(4,88),student(5,92) };
	student* p = &stud[0];
	p->max(p);
	return 0;
}