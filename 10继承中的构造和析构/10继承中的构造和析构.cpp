#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ע�⣺�м̳У�ʵ�����������ʱ�����뱣֤����Ĺ���������ܱ�����
class Father
{
public:
	Father(int a)
	{
		cout << "Father ���캯��" << endl;
	}

	~Father()
	{
		cout << "Father ��������" << endl;
	}

};
class A
{
public:
	A()
	{
		cout << "A�Ĺ��캯��" << endl;
	}
	~A()
	{
		cout << "A����������" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "B�Ĺ��캯��" << endl;
	}
	~B()
	{
		cout << "B����������" << endl;
	}
};

class Son:public Father
{
public:
	Son(int a) :Father(a)
	{
		cout << "Son ���캯��" << endl;
	}

	~Son()
	{
		cout << "Son ��������" << endl;
	}

public:
	B b;
	A a;
	

};
//�ȵ��ø���Ĺ��캯�����ٵ��ñ���Ĺ��캯����������������˳��֮
//�ȵ��ø���Ĺ��캯�����ٵ��ó�Ա����Ĺ��캯������Ա����Ĺ��캯������˳��Ͷ����˳��һ������
//����ٵ��ñ���Ĺ��캯����������������˳��֮

void test()
{
	Son s(10);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

