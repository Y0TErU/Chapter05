#include<iostream>
using namespace std;

void CalcMultipless(int* array, int size, int n)	//�|�C���^�^array
{
	for (int i = 0; i < size; i++)
	{
		array[i] = n * (i + 1);
	}
}

void ShowArray(const int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
		if (i % 9 == 0)
		{
			cout << endl;
		}
	}
	
}

int main()
{
	int* array;		//array�̃|�C���^
	int size;		//�ϐ�size

	cout << "�ǂ��܂Ōv�Z���܂����H > " << flush;
	cin >> size;	//size�ɓ��͂����l�����i�������j

	array = new int[size];		//�z��̕ϐ��̓��I�m��	

	CalcMultipless(array, size,3);	//�֐��̌Ăяo��
	ShowArray(array, size);

	delete[] array;

}