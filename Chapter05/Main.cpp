#include<iostream>
#include<algorithm>
using namespace std;

//アドレスが常に一定かのチェック

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress()
{
	cout << "常にアドレスが一定かのチェック" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

//静的変数aと自動変数bのアドレスを出力
void CheckAddress_Sub()
{
	static int a;
	int b;
	cout << "&a = " << (size_t)&a << endl
		<< "&b = " << (size_t)&b << endl;
}

/*
	この関数の中からCheckAddress_Subを読んだときに
	変数aとbのアドレスがどうなるかチェック
*/

void CheckAddress_Sub2()
{
	cout << "in Sub2" << endl;
	CheckAddress_Sub();

}

void CheckInitOnce_Sub();

void CheckInitOnce()
{
	cout << endl << "初期化が1回しかされていないかのチェック" << endl;

	CheckInitOnce_Sub();
	CheckInitOnce_Sub();
}

//++aと++bの影響が2回目以降の呼び出しに影響するかチェック
void CheckInitOnce_Sub()
{
	static int a = 3;
	int b = 3;

	cout << "a = " << a << endl
		<< "b = " << b << endl;

	++a;
	++b;
}

//0出初期化されるかのチェック
//偶然0だった場合を想定し、4個の変数を使って呼び出す
void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit()
{
	cout << endl << "0で初期化されるかのチェック" << endl;

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
	cout << endl << "値が保障されているかのチェック" << endl;

	int* pa, * pb;	//*は両方につけないとダメ！

	CheckInvariant_Sub(pa, pb);
	CheckInvariant_Sub2();
	//CheckInvariant_Sub2を呼んでもaとbの値が保存されているかチェック

	cout << "*pa = " << *pa << endl
		<< "*pb = " << *pb << endl;
}

//静的変数aと自動変数bのアドレスを引数を通して返す
//int*& はint* への参照です
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

//main関数
int main()
{
	CheckAddress();
	CheckInitOnce();
	CheckZeroInit();
	CheckInvariant();
}