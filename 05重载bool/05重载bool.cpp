#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker
{
public:
	Maker()
	{
		a = 0;
	}

	//重载bool,没有返回值
	operator bool()
	{
		if (a <= 0)
		{
			return false;
		}
		return true;
	}
	operator int()
	{
		return 10;
	}
public:
	int a;
};

void test()
{
	Maker maker;

	if (!maker)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	int ret =(int) maker;
	cout << "ret="<<ret << endl;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

