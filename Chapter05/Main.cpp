#include<iostream>
using namespace std;

void Func(int a = 0)
{
	cout << (size_t)&a << endl;
}

void Func2()
{
	Func();
	
}

int main()
{
	Func();
	Func2();
	Func();
	//�֐���ʂ���a�̃A�h���X��\�����Ă���
	//���̊֐���ʂ��ƃA�h���X���ς��
}


