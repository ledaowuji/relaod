#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�����
class Animal
{
public:
	Animal()
	{
		age = 80;
	}
public:
	int age;
};
//��̳�
class Sheep :virtual public Animal
{
	//int age
};

class Camel :virtual public Animal
{
	//int age
};

class SheepCamel :public Sheep, public Camel
{
	//int age  --Sheep
	//int age --Camel
};
//��̳п��Խ�����μ̳��еĶ���������

void test()
{
	SheepCamel sp;
	cout << sp.age << endl;

	cout << sizeof(Sheep) << endl;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

