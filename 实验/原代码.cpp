#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
//实验1//




/*
int main()
{
	int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
*/




/*
int main()
{
	const double pi = 3.14159265358979323846;
	double r, h;
	cout << "请输入圆锥的半径和高： ";
	cin >> r >> h;
	double volume = pi * r * r * h / 3;
	cout << "圆锥的体积为： " << volume << endl;
	return 0;
}
*/




/*
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "unsigned char:" << sizeof(unsigned char) << endl;
	cout << "wchar_t:" << sizeof(wchar_t) << endl;
	cout << "signed:" << sizeof(signed) << endl;
	cout << "unsigned:" << sizeof(unsigned) << endl;
	cout << "short:" << sizeof(short) << endl;
	cout << "long:" << sizeof(long) << endl;
	cout << "unsigned short:" << sizeof(unsigned short) << endl;
	cout << "unsigned long:" << sizeof(unsigned long) << endl;
	cout << "double" << sizeof(double) << endl;
	cout << "long double" << sizeof(long double) << endl;
	return 0;
}
*/




/*
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
	system("pause");
	return 0;
}
*/




/*
int main()
{
	double F, C;
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << fixed << setprecision(2) << "摄氏度为" << C << endl;
	return 0;
}
*/




//实验2//




/*
int main()
{
	char a, b;
	cin >> a;
	if (a <= 122 && a >= 97)
	{
		b = a - 32;
		cout << b << endl;
	}
	else b = a + 1, cout << b << endl;
	return 0;
}
*/




/*
int main()
{
	double x, y;
	cin >> x;
	if (0<x&&x<10)

	{
		if (x<1)
		{
			y = 3 - 2 * x;
			cout << y << endl;
		}
		else if (x < 5)
		{
			y = 2 / (4 * x) + 1;
			cout << y << endl;
		}
		else
		{
			y = x*x;
			cout << y << endl;
		}
	}
	    else
		cout << "x不在定义域内" << endl;
	return 0;
}
*/




/*
int main()
{
	double x, y, z, d;
	cout << "请输入三角形三边长" <<'\n' << endl;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && z + y > x)
	{
		d = x + y + z;
		cout << "三角形的周长为" << '\t' << d << endl;
		if (x == y || x == z || y == z)
			cout << "为等腰三角形" << endl;
		else
			cout << "不是等腰三角形" << endl;
	}
	else
		cout << "不能构成三角形" << endl;
	return 0;
}
*/




/*
int main()
{
	double x, y,z; char a;
	cout << "请依次输入数字，符号，数字。" << endl;
	cin >> x >> a >> y;
		if (a == '+')
		{
			z = x + y;
			cout << z << endl;
		}
		else if (a == '-')
		{
			z = x - y;
			cout << z << endl;
		}
		else if (a == '*')
		{
			z = x * y;
			cout << z << endl;
		}
		else if (a == '/')
		{
			if (y == 0)
				cout << "除数不能为0！" << endl;
			else
			{
				z = x / y;
				cout << z << endl;
			}
		}
		else if (a == '%')
		{
			z = int(x) % int(y);
			cout << z << endl;
		}
	    else
		cout << "运算符非法！" << endl;
	return 0;
}
*/




/*
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	string input; // 使用 string 类型读取整行输入
	cout << "请输入一行字符：";
	getline(cin, input); // 读取整行字符

	for (char e : input) // 遍历字符串中的每个字符
	{
		if ((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z'))
			a++;
		else if (e == ' ')
			b++;
		else if (e >= '0' && e <= '9')
			c++;
		else
			d++;
	}

	cout << "英文字母个数：" << a << endl;
	cout << "空格个数：" << b << endl;
	cout << "数字字符个数：" << c << endl;
	cout << "其它字符个数：" << d << endl;
	return 0;
}
*/




/*
int main()
{
	int a, b, c, m, n, x,y;
	cout << "请确保输入的是两个正整数！" << endl;
	cin >> a >> b;
	n = a;
	x = b;
	if (a < b)
	{
		c = b;
		b = a;
		a = c;
	}
		
	while ((m = a % b) != 0)
	{
		a = b;
		b = m;
	}
	cout << "最大公约数为" << '\n' << b << endl;
	y = n * x / b;
	cout << "最小公倍数为" << '\n' << y << endl;
	return 0;
}
*/




/*
int main()
{
	int a, b;
	for (a = 0; a < 6; a++)
	{
		for (b = 0; b < a; b++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}
*/



/*
int main()
{
	double a, xn,b;
	cout << "请输入" << endl;
	cin >> a;
	b = a;
	xn = a;
	xn =  (xn+ a / xn)/2;
	for (;((b - xn) >= (10e-5)) ||( (b-xn)<=( - 10e-5));)
	{
		b = xn;
		xn =  (xn + a / xn)/2;
	}
	cout << "平方根为" << '\t' << xn << endl;
	return 0;
}
*/



/*
int main()
{
	int a = 2, sum = 0, x = 0;
	double  b,c;
	for (; sum < 100;)
	{
		c = a;
		sum = sum + a;
		a = a * 2;
		x++;
	}
	b = (sum - c) * 0.8 / (x-1);
	cout<<"每天平均花" <<'\t'<< b << endl;
}
*/