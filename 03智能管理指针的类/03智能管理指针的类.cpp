#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker
{
public:
	Maker(){}
	Maker(const char *name)
	{
		cout << "Maker�вι���" << endl;
		pname = new char[strlen(name) + 1];
		strcpy(pname, name);
	}
	void printMaker()
	{
		cout << "printMaker()" << endl;
	}

	~Maker()
	{
		cout << "Maker��������" << endl;
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
		cout << "Maker2�вι���" << endl;
		pname = new char[strlen(name) + 1];
		strcpy(pname, name);
	}

	~Maker2()
	{
		cout << "Maker2��������" << endl;
		if (pname != NULL)
		{
			delete[] pname;
			pname = NULL;
		}
	}
public:
	char *pname;
};

//���ܹ���ָ�����
class Student
{
public:
	Student(Maker *p,Maker2 *p2)
	{
		cout << "Student�вι���" << endl;

		this->myp = p;
		this->myp2 = p2;
	}
	Maker *operator->()
	{
		return myp;
	}

	Maker &operator*()
	{
		return *myp;//*myp�Ƕ���
	}
	~Student()
	{
		if (this->myp != NULL)
		{
			delete this->myp;//�ͷŵ���new Maker��
			this->myp = NULL;
		}
		if (this->myp2 != NULL)
		{
			delete this->myp2;
			this->myp2 = NULL;
		}

		cout << "Student��������" << endl;
	}

public:
	Maker *myp;
	Maker2 *myp2;
};

void test()
{
	Maker *p = new Maker;
	Maker2 *p2 = new Maker2;

	//s�����������ջ������test����������ȥ����Student����������
	//����������������ͷ��˴Ӷ��������Maker����
	Student s(p,p2);
	//s->Ҫ����Maker���Ͳ��ܴ�ӡ��printMaker()
	s->printMaker();

	
	(*s).printMaker();
	


}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

