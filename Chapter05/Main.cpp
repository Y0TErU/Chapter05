#include<iostream>
#include<algorithm>
using namespace std;

//�A�h���X����Ɉ�肩�̃`�F�b�N

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress()
{
	cout << "��ɃA�h���X����肩�̃`�F�b�N" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

//�ÓI�ϐ�a�Ǝ����ϐ�b�̃A�h���X���o��
void CheckAddress_Sub()
{
	static int a;
	int b;
	cout << "&a = " << (size_t)&a << endl
		<< "&b = " << (size_t)&b << endl;
}

/*
	���̊֐��̒�����CheckAddress_Sub��ǂ񂾂Ƃ���
	�ϐ�a��b�̃A�h���X���ǂ��Ȃ邩�`�F�b�N
*/

void CheckAddress_Sub2()
{
	cout << "in Sub2" << endl;
	CheckAddress_Sub();

}

void CheckInitOnce_Sub();

void CheckInitOnce()
{
	cout << endl << "��������1�񂵂�����Ă��Ȃ����̃`�F�b�N" << endl;

	CheckInitOnce_Sub();
	CheckInitOnce_Sub();
}

//++a��++b�̉e����2��ڈȍ~�̌Ăяo���ɉe�����邩�`�F�b�N
void CheckInitOnce_Sub()
{
	static int a = 3;
	int b = 3;

	cout << "a = " << a << endl
		<< "b = " << b << endl;

	++a;
	++b;
}

//0�o����������邩�̃`�F�b�N
//���R0�������ꍇ��z�肵�A4�̕ϐ����g���ČĂяo��
void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit()
{
	cout << endl << "0�ŏ���������邩�̃`�F�b�N" << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

void CheckZeroInit_Sub()
{
	static int a, b, c, d;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void CheckZeroInit_Sub2()
{
	static int a, b, c, d;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void CheckInvariant_Sub(int*& pa, int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant()
{
	cout << endl << "�l���ۏႳ��Ă��邩�̃`�F�b�N" << endl;

	int* pa, * pb;	//*�͗����ɂ��Ȃ��ƃ_���I

	CheckInvariant_Sub(pa, pb);
	CheckInvariant_Sub2();
	//CheckInvariant_Sub2���Ă�ł�a��b�̒l���ۑ�����Ă��邩�`�F�b�N

	cout << "*pa = " << *pa << endl
		<< "*pb = " << *pb << endl;
}

//�ÓI�ϐ�a�Ǝ����ϐ�b�̃A�h���X��������ʂ��ĕԂ�
//int*& ��int* �ւ̎Q�Ƃł�
void CheckInvariant_Sub(int*& pa, int*& pb)
{
	static int a = 9;
	int b = 9;
	pa = &a;
	pb = &b;
}

void CheckInvariant_Sub2()
{
	int dummy[100];
	fill_n(dummy, 100, 0);
}

//main�֐�
int main()
{
	CheckAddress();
	CheckInitOnce();
	CheckZeroInit();
	CheckInvariant();
}