#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//仿函数，有些函数需要常用到，但又不好写成全局函数，如果把这个函数写成成员函数，然后重载()，
//这样就可以把对象仿照成函数一样使用
//仿函数会作为算法的策略

class Maker
{
public:
	Maker()
	{

	}
	Maker(string name)
	{
		this->name = name;
	}

	Maker(int a, int b)
	{

	}
	int operator()(int a,int b)
	{
		cout << "int operator()(int a,int b)" << endl;
		return a + b;
	}

	void printMaker()
	{
		cout << this->name << "好漂亮" << endl;
	}
private:
	string name;
};





void test()
{
	Maker func("翠花");

	func.printMaker();

	Maker func2(10, 20);//这个调用有参构造函数

	Maker func3;//这个调用无参构造函数
	func3(10, 20);//这个会调用（）重载函数
	cout << func3(1,2) << endl;

	func3(10, 20);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

