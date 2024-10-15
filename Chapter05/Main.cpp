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

void ShowScore(const Student* pointer)
{
	cout << "–¼‘O: " << pointer->name << endl
		<< "‘Œê: " << pointer->score_japanese << flush
		<< "”Šw: " << pointer->score_math << flush
		<< "‰pŒê: " << pointer->score_English << endl;
}

int main()
{
	Student student[] =
	{ 
	{"“ú“o—z‹P",73,98,86,},
	{"“ì•”—Dl",64,45,40,},
	{"‹g“cŠ",76,78,69},
	};
	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; i++)
	{
		ShowScore(&student[i]);
	}
}