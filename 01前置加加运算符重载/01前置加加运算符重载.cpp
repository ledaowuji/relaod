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
	//ǰ�üӼӣ����ص�������
	Maker &operator++()
	{
		++a;
		return *this;
	}
	//���üӼӣ��ȷ��أ���Ӽ�  ���ص���ֵ
	Maker operator++(int)//ռλ����������int
	{
	// m++
		//*this�����a�Ƕ��٣�11
		Maker tmp(*this);//������ʲô���캯�����������캯��
		//tmp���a��11��Ȼ���tmp�ȷ��س�ȥ
		++this->a;//��Ӽ�,*this��m
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
//ͬ�������£�����ʹ��ǰ�üӼӣ���Ϊ���üӼ���Ҫʵ����һ����ʱ������������Ҫ�������ο������캯��

void test()
{
	Maker m(10);
	//ǰ�üӼӣ��ȼӼ��ٷ���
	cout << ++m << endl;//11
	cout << &m << endl;

	
	//���üӼ��ǣ��ȷ��أ���Ӽ�
	cout << &(m++) << endl;//11
	cout << m << endl;//12
	cout << &m << endl;

	

}

void test02()
{
	Maker m(10);

	++(++m);//���++m���ص����¶�����ô���������++����++�ľ����¶���
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

