#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Father
{
public://����
	int a;
private://˽��
	int b;
protected://����
	int c;
};
//���м̳�
//������Է��ʴӸ���̳й����Ĺ���Ȩ�޳�Ա
//���ڿ��Է��ʴӸ���̳й����Ĺ���Ȩ�޳�Ա
//���ڿ��Է��ʴӸ���̳й����ı���Ȩ�޳�Ա
//���ⲻ���Է��ʴӸ���̳й����ı���Ȩ�޳�Ա
//�����ⶼ���ܷ��ʴӸ���̳й�����˽��Ȩ�޳�Ա
class Son :public Father
{
	//4��������3������

	void func()
	{
		a = 200;
		//b;
		c;
	}

};

void test01()
{
	Son s;
	s.a;
	s.Father::a;
	
	
}
//˽�м̳�
//���ⲻ�ܷ��ʴӸ���̳й����Ĺ���Ȩ�޳�Ա
//���ڿ��Է��ʴӸ���̳й����Ĺ���Ȩ�޳�Ա
//�������ڶ������Է��ʴӸ���̳й�����˽��Ȩ�޳�Ա
//���ڿ��Է��ʴӸ���̳й����ı���Ȩ�޳�Ա
//���ⲻ���Է��ʴӸ���̳й����ı���Ȩ�޳�Ա

class Son2 :private Father
{
	//4��������3������

	void func()
	{
		a = 20;
		//b;err
		c;
	}
};

void test02()
{
	Son2 s2;
	//s2.a;err
	
}
//�����̳�
//���ⲻ�ܷ��ʴӸ���̳й����Ĺ���Ȩ�޳�Ա
//���ڿ��Է��ʴӸ���̳й����Ĺ���Ȩ�޳�Ա
//�������ڶ������Է��ʴӸ���̳й�����˽��Ȩ�޳�Ա
//���ڿ��Է��ʴӸ���̳й����ı���Ȩ�޳�Ա
//���ⲻ���Է��ʴӸ���̳й����ı���Ȩ�޳�Ա

class Son3 :protected Father
{
	void func()
	{
		a;
		//b;err
		c;
	}
};

void test03()
{
	Son3 s3;
	//s3.a;err
	
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

