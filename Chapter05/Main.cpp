#include<iostream>
using namespace std;

int main()
{
	int* p = new int;	//メモリを動的に確保する

	*p = 0;				//ポインタの変数をそのまま使用して値を書き換えることができる
	cout << *p << endl;

	delete p;

}