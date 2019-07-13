#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker
{
public:
	Maker(int a)
	{
		this->a = a;
	}
	//前置加加，返回的是引用
	Maker &operator++()
	{
		++a;
		return *this;
	}
	//后置加加，先返回，后加加  返回的是值
	Maker operator++(int)//占位参数必须是int
	{
	// m++
		//*this里面的a是多少？11
		Maker tmp(*this);//调用了什么构造函数，拷贝构造函数
		//tmp里的a是11，然后把tmp先返回出去
		++this->a;//后加加,*this是m
		return tmp;

	}
public:
	int a;
};
ostream& operator<<(ostream &out, Maker &m)
{
	out << m.a;
	return out;
}
//同等条件下，优先使用前置加加，因为后置加加需要实例化一个临时变量，而且需要调用两次拷贝构造函数

void test()
{
	Maker m(10);
	//前置加加，先加加再返回
	cout << ++m << endl;//11
	cout << &m << endl;

	
	//后置加加是，先返回，后加加
	cout << &(m++) << endl;//11
	cout << m << endl;//12
	cout << &m << endl;

	

}

void test02()
{
	Maker m(10);

	++(++m);//如果++m返回的是新对象，那么括号外面的++，他++的就是新对象
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

