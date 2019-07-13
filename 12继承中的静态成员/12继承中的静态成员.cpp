#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//父类的静态成员也能被子类继承
class Father
{
public:
	static int fA;
	static void func(int a)
	{
		cout << "static void func(int a)" << endl;
	}
	static void func()
	{
		cout << "static void func()" << endl;
	}

	static void func(int a,int b)
	{
		cout << "static void func(int a,int b)" << endl;
	}
};
int Father::fA = 100;
//从父类继承过来的同名成员被隐藏
class Son :public Father
{
public:
	static int fA;
	static void func()
	{
		cout << "Son void func()" << endl;
	}
};

int Son::fA = 200;

void test()
{
	cout << Son::fA << endl;
	cout << Son::Father::fA << endl;
	Son::Father::func(10);
	Son::Father::func();
	Son::func();
	
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

