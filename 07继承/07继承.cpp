#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//�̳У�1.���븴�á�2.��չ��Ĺ���
//���ࣨ���ࣩ
class Father
{
public:
	void func1()
	{
		cout << "С���" << endl;
	}
	void func2()
	{
		cout << "��Ҫ��ǩ" << endl;
	}
	void func3()
	{
		cout << "��Ҫȥ���" << endl;
	}
	void func4()
	{
		cout << "��Ҫȥ������" << endl;
	}

};
//���ࣨ�����ࣩ
class Son :public Father//���м̳�
{
public:
	void Sonfunc1()
	{
		cout << "С��㣬�̲��ܼ�ʲô?" << endl;

	}
	void Sonfunc2()
	{
		cout << "�ܼ����飬Ҭ��" << endl;

	}
	void Sonfunc3()
	{
		cout << "�ܼ���΢����?" << endl;
	}
};

void test()
{
	Son s;
	s.func1();
	s.func2();
	s.func3();
	s.func4();
	s.Sonfunc1();
	s.Sonfunc2();
	s.Sonfunc3();
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

