#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;
class MyString
{
	friend ostream &operator<<(ostream &out, MyString &str);
	friend istream &operator>>(istream &in, MyString &str);
public:
	MyString();
	MyString(int n,char c);//���û�����ʼ�����ݣ�n��c�ַ�����ַ���
	//��������
	MyString(const MyString &str);
	//��ֵ����
	MyString &operator=(const MyString &str);
	~MyString();


	MyString operator+(const MyString &str);
	MyString operator+(const char *s);


	MyString &operator+=(const MyString &str);
	MyString &operator+=(const char *s);

	int Size();

	char &operator[](int index);


	/*
	MyString str1;
	MyString str2;
	MyString str3=str1+str2;
	MyString str4=str1+"hello";

	str4+=str3;
	str4+="hello";
	//���Ҫ��ӡ˽�г�Ա��������ô�����ƺ���Ҫд�������Ԫ����
	cout<<str4<<endl;
	cin>>str4;

	*/

private:
	char *p;
	int mSize;


};



