#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
using namespace std;
class Myarr
{
public:
	Myarr();
	//���û�ָ������Ĵ�С�ͳ�ʼֵ
	Myarr(int Capacity, int val);
	//�г�Աָ�룬�����ڹ��캯������������ռ䣬�������������ͷŶ����ռ�
	//д�Լ��Ŀ������캯��
	Myarr(const Myarr &m);
	//��ֵ���������ظ�ֵ�������
	Myarr &operator=(const Myarr &arr);
	~Myarr();

	//���������±�[]
	int& operator[](int index);
	//β��
	void PushBack(int val);
	//ͷ��
	void PushFront(int val);

	//βɾ
	void PopBack();
	//ͷɾ
	void PopFront();
	//��ȡԪ�ظ���
	int getSize();
	//��ȡ����
	int getCapacity();

	//ָ��λ�ò���Ԫ��
	void InserArr(int pos, int val);
	//��ȡָ��λ�õ�ֵ
	int &getPosByVal(int pos);//�ú����ܵ���ֵ����ֵ
	//ָ��λ���޸�ֵ
	void setPosByVal(int pos, int val);

	



private:
	int *p;//�洢������׵�ַ
	int mSize;//Ԫ�ظ���
	int mCapacity;//����
};

