#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//�º�������Щ������Ҫ���õ������ֲ���д��ȫ�ֺ�����������������д�ɳ�Ա������Ȼ������()��
//�����Ϳ��԰Ѷ�����ճɺ���һ��ʹ��
//�º�������Ϊ�㷨�Ĳ���

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
		cout << this->name << "��Ư��" << endl;
	}
private:
	string name;
};





void test()
{
	Maker func("�仨");

	func.printMaker();

	Maker func2(10, 20);//��������вι��캯��

	Maker func3;//��������޲ι��캯��
	func3(10, 20);//�������ã������غ���
	cout << func3(1,2) << endl;

	func3(10, 20);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

