#include <iostream>
#include <ctime>
#include <random>
#include "sorts.cpp"
#include <stdio.h>
using namespace std;
double timer(int tip_sort, int a[], long long n)
{
	unsigned int start = clock();
	if (tip_sort == 1)
	{
	selectionSort(a, n);
	}
	else if (tip_sort == 2)
	{
	bubbleSort(a, n);
	}
	else if (tip_sort == 3)
	{
	insertionSort(a, n);
	}
	else if (tip_sort == 4)
	{
	mergeSort(a, n);
	}
	else
	{
	quickSort(a, n);
	}
	return (clock() - start) / 1000.0;
}
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
		//long long choice1 = 1, choice2 = 2, choice3 = 3, choice4 = 4, choice5 = 5;
		if (choice == 0)
		return 0;
		cout << "Write the length of the array under test:\n";// выбор длины тестируемого массива
		cin >> len;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "s\n";
													//здесь выводится кол-во времени для каждой сортировки массивов в виде таблицы (нужно немного подождать)													
		printf("\t\t10000\t50000\t100000\n");		//len - длина массива
		printf("ChoiceSort\t");
		choice = 1;
		len = 10000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		len = 50000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 100000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\n";
		printf("BubbleSort\t");
		
		choice = 2;
		len = 10000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 50000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 100000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\n";
		printf("InsertSort\t");
		
		choice = 3;
		len = 10000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 50000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 100000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\n";
		printf("MergeSort\t");
		
		choice = 4;
		len = 10000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 50000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 100000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\n";
		printf("QuickSort\t");
		
		choice = 5;
		len = 10000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 50000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\t";
		
		len = 100000;
		for (long long i = 0; i < len; i++)
		m[i] = rand();
		cout << timer(choice, m, len) << "\n";
		return 0;
	}
}
