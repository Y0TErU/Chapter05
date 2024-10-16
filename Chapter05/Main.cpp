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
	//関数を通してaのアドレスを表示している
	//他の関数を通すとアドレスが変わる
}


