#include<iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "2つの値を入力して下さい > " << flush;
	cin >> a >> b;

	cout << "大きい方の値は " << (a > b ? a : b) << " です。" << endl;

}


