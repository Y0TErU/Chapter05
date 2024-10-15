#include<iostream>
using namespace std;

enum ConpareResult
{
	CR_LESS_THAN,		//より小さい
	CR_EQUAL_TO,		//等しい
	CR_GREATER_THAN		//より大きい

};

ConpareResult Compare(int a, int b)
{
	if (a < b)
	{
		return CR_LESS_THAN;
	}
	else if (a > b)
	{
		return CR_GREATER_THAN;
	}
	else
	{
		return CR_EQUAL_TO;
	}
}

bool Compare()
{
	int a, b;

	cout << "数字を2つ入力して下さい > " << flush;
	cin >> a >> b;
	if (a == -1)
	{
		return false;
	}

	switch (Compare(a, b))
	{
	case CR_LESS_THAN:
		cout << "前者は後者より小さいです。" << endl;
		break;
	case CR_GREATER_THAN:
		cout << "前者は後者より大きいです。" << endl;
		break;
	case CR_EQUAL_TO:
		cout << "両者は等しいです。" << endl;
		break;
	}
	return true;
}

int main()
{
	while (Compare())
	{
		//何もしない
	}

}
