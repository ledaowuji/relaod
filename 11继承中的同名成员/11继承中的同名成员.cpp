#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Father
{
public:
	Father()
	{
		a = 100;
	}
public:
	int a;
};
//�Ӹ���̳й�����ͬ����Ա������
class Son :public Father
{
public:
	Son()
	{
		a = 200;
	}
public:
	int a;
};

void test()
{
	Son s;
	cout << sizeof(Son) << endl;//8
	cout << s.a << endl;
	//ͨ�������������������ķ�ʽ�����ʱ����ص�ͬ����Ա
	cout << s.Father::a << endl;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

