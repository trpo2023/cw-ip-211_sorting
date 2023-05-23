#include <iostream>
#include <ctime>
#include <random>
#include "sorts.cpp"
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int m[100000];
	long long choice, len;
	double time;
	while (true)
	{
		cout << "Select the sort type:\n(0) exit\n(1) Sorting by choice\n(2) BubbleSort\n(3) InsertSort\n(4) MergeSort\n(5) QuickSort\n";
		cin >> choice;
		if (choice == 0)
		return 0;
		cout << "Write the length of the array under test:\n";// выбор длины тестируемого массива
		cin >> len;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "s\n";
	}
}
