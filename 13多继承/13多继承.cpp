#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Father1
{
public:
	Father1()
	{
		CarName = "����";
	}
public:
	string CarName;
};

class Father2
{
public:
	Father2()
	{
		CarName = "����";
	}
public:
	string CarName;
};

class Son :public Father1,public Father2
{

};
//��̳���ͬ�����ⲻ�ܽ��

void test()
{
	Son s;
	//s.CarName; err
	cout<<s.Father1::CarName << endl;

	cout << s.Father2::CarName << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

