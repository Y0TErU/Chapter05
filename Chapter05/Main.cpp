#include<iostream>
using namespace std;

enum ConpareResult
{
	CR_LESS_THAN,		//��菬����
	CR_EQUAL_TO,		//������
	CR_GREATER_THAN		//���傫��

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

	cout << "������2���͂��ĉ����� > " << flush;
	cin >> a >> b;
	if (a == -1)
	{
		return false;
	}

	switch (Compare(a, b))
	{
	case CR_LESS_THAN:
		cout << "�O�҂͌�҂�菬�����ł��B" << endl;
		break;
	case CR_GREATER_THAN:
		cout << "�O�҂͌�҂��傫���ł��B" << endl;
		break;
	case CR_EQUAL_TO:
		cout << "���҂͓������ł��B" << endl;
		break;
	}
	return true;
}

int main()
{
	while (Compare())
	{
		//�������Ȃ�
	}

}
