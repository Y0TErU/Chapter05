#include<iostream>
using namespace std;

void CalcMultipless(int* array, int size, int n)	//ポインタ型array
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
	int* array;		//arrayのポインタ
	int size;		//変数size

	cout << "どこまで計算しますか？ > " << flush;
	cin >> size;	//sizeに入力した値を代入（初期化）

	array = new int[size];		//配列の変数の動的確保	

	CalcMultipless(array, size,3);	//関数の呼び出し
	ShowArray(array, size);

	delete[] array;

}