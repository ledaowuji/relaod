#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//虚基类
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
//虚继承
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
//虚继承可以解决菱形继承中的二义性问题

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

