#include<iostream>
using namespace std;

int main()
{
	int* p = new int;	//�������𓮓I�Ɋm�ۂ���

	*p = 0;				//�|�C���^�̕ϐ������̂܂܎g�p���Ēl�����������邱�Ƃ��ł���
	cout << *p << endl;

	delete p;

}