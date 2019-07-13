#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker
{
public:
	Maker(){}
	Maker(const char *name)
	{
		cout << "Maker有参构造" << endl;
		pname = new char[strlen(name) + 1];
		strcpy(pname, name);
	}
	void printMaker()
	{
		cout << "printMaker()" << endl;
	}

	~Maker()
	{
		cout << "Maker析构函数" << endl;
		if (pname != NULL)
		{
			delete[] pname;
			pname = NULL;
		}
	}
public:
	char *pname;
};

class Maker2
{
public:
	Maker2(){}
	Maker2(const char *name)
	{
		cout << "Maker2有参构造" << endl;
		pname = new char[strlen(name) + 1];
		strcpy(pname, name);
	}

	~Maker2()
	{
		cout << "Maker2析构函数" << endl;
		if (pname != NULL)
		{
			delete[] pname;
			pname = NULL;
		}
	}
public:
	char *pname;
};

//智能管理指针的类
class Student
{
public:
	Student(Maker *p,Maker2 *p2)
	{
		cout << "Student有参构造" << endl;

		this->myp = p;
		this->myp2 = p2;
	}
	Maker *operator->()
	{
		return myp;
	}

	Maker &operator*()
	{
		return *myp;//*myp是对象
	}
	~Student()
	{
		if (this->myp != NULL)
		{
			delete this->myp;//释放的是new Maker；
			this->myp = NULL;
		}
		if (this->myp2 != NULL)
		{
			delete this->myp2;
			this->myp2 = NULL;
		}

		cout << "Student析构函数" << endl;
	}

public:
	Maker *myp;
	Maker2 *myp2;
};

void test()
{
	Maker *p = new Maker;
	Maker2 *p2 = new Maker2;

	//s这个对象是在栈区，当test函数结束会去调用Student的析构函数
	//在这个析构函数中释放了从堆区申请的Maker对象
	Student s(p,p2);
	//s->要返回Maker类型才能打印出printMaker()
	s->printMaker();

	
	(*s).printMaker();
	


}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

