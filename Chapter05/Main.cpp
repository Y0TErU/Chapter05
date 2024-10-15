#include<iostream>
using namespace std;

const int MAX_NAME = 16;
struct Student 
{
	char name[MAX_NAME + 1];
	int score_japanese;
	int score_math;
	int score_English;
};

void ShowScore(const Student& student)
{
	cout << "���O: " << student.name << endl
		<< "����: " << student.score_japanese << flush
		<< "���w: " << student.score_math << flush
		<< "�p��: " << student.score_English << endl;
}

int main()
{
	Student student[] =
	{ 
	{"���o�z�P",73,98,86,},
	{"�암�D�l",64,45,40,},
	{"�g�c��",76,78,69},
	};
	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; i++)
	{
		ShowScore(student[i]);
	}
}