#include "Myarr.h"


Myarr::Myarr()
{
	this->mCapacity = 20;
	this->mSize = 0;
	this->p = new int[this->mCapacity];
	for (int i = 0; i < this->mCapacity; i++)
	{
		this->p[i] = 0;
	}

}


Myarr::~Myarr()
{

	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}

}


//���û�ָ������Ĵ�С�ͳ�ʼֵ
Myarr::Myarr(int Capacity, int val=0)
{
	this->mCapacity = Capacity;
	this->mSize = Capacity;

	this->p = new int[this->mCapacity];
	for (int i = 0; i < this->mCapacity; i++)
	{
		this->p[i] = val;
	}

	


}
//�г�Աָ�룬�����ڹ��캯������������ռ䣬�������������ͷŶ����ռ�
//д�Լ��Ŀ������캯��
Myarr::Myarr(const Myarr &m)
{
	this->mCapacity = m.mCapacity;
	this->mSize = m.mSize;
	this->p = new int[this->mCapacity];
	//��������
	for (int i = 0; i < this->mSize; i++)
	{
		this->p[i] = m.p[i];
	}

}


Myarr &Myarr::operator=(const Myarr &arr)
{
	//1.�ͷ�ԭ���Ŀռ�
	if (this->p != NULL)
	{
		delete[] this->p;
		this->p = NULL;
	}
	//2.����ռ�
	this->mCapacity = arr.mCapacity;
	this->mSize = arr.mSize;
	this->p = new int[this->mCapacity];
	//3.��������
	for (int i = 0; i < this->mSize; i++)
	{
		this->p[i] = arr.p[i];
	}
	//4.�����Լ�
	return *this;
}

//���������±�[]
int& Myarr::operator[](int index)
{
	return this->p[index];
}


//β��
void Myarr::PushBack(int val)
{
	if (this->mCapacity == this->mSize)
	{
		return;
	}

	this->p[this->mSize] = val;
	this->mSize++;

}
//ͷ��
void Myarr::PushFront(int val)
{
	if (this->mCapacity == this->mSize)
	{
		return;
	}

	for (int i = this->mSize - 1; i >= 0; i--)
	{
		this->p[i + 1] = this->p[i];
	}

	this->p[0] = val;
	this->mSize++;
}

//βɾ
void Myarr::PopBack()
{
	if (this->mSize == 0)
	{
		return;
	}

	this->mSize--;
}
//ͷɾ
void Myarr::PopFront()
{
	if (this->mSize == 0)
	{
		return;
	}

	for (int i = 0; i < this->mSize - 1; i++)
	{
		this->p[i] = this->p[i + 1];
	}

	this->mSize--;

}
//��ȡԪ�ظ���
int Myarr::getSize()
{
	return this->mSize;
}
//��ȡ����
int Myarr::getCapacity()
{
	return this->mCapacity;
}

//ָ��λ�ò���Ԫ��
void Myarr::InserArr(int pos, int val)
{
	if (this->mCapacity == this->mSize)
	{
		return;
	}

	//���λ�ò��ԣ���λ�ñ�Ϊ���
	if (pos<0 || pos>this->mSize - 1)
	{
		pos = this->mSize;
	}

	for (int i = this->mSize - 1; i >= pos; i--)
	{
		this->p[i + 1] = this->p[i];
	}

	this->p[pos] = val;
	this->mSize++;


}
//��ȡָ��λ�õ�ֵ
int& Myarr::getPosByVal(int pos)//�ú����ܵ���ֵ����ֵ
{
	
	return this->p[pos];
}
//ָ��λ���޸�ֵ
void Myarr::setPosByVal(int pos, int val)
{

	this->p[pos] = val;
}



