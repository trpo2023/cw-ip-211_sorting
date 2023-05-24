#include "sorts.h"
#include "ctest.h"

CTEST(selection_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  selectionSort(arr, n);
  for (int i=0; i<n;i++)
    ASSERT_EQUAL(expected[i], arr[i]);
}

CTEST(bubble_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  bubbleSort(arr, n);
   for (int i=0; i<n;i++)
    ASSERT_EQUAL(expected[i], arr[i]);
}

CTEST(insertion_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  insertionSort(arr, n);
   for (int i=0; i<n;i++)
    ASSERT_EQUAL(expected[i], arr[i]);
}

CTEST(merge_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  mergeSort(arr, n);
   for (int i=0; i<n;i++)
    ASSERT_EQUAL(expected[i], arr[i]);
}

CTEST(quick_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  quickSort(arr, n);
   for (int i=0; i<n;i++)
    ASSERT_EQUAL(expected[i], arr[i]);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

CTEST(timer_test, selectionSortTest)
{
 
 int a[] = { 7, 2, 9, 1, 6 };
 long long n = 5;

 double time = timer(1, a, n);

 ASSERT_EQUAL(0.0, time);
}

CTEST(timer_test, bubbleSortTest)
{
 int a[] = { 7, 2, 9, 1, 6 };
 long long n = 5;

 double time = timer(2, a, n);

 ASSERT_EQUAL(0.0, time);
}

CTEST(timer_test, insertionSortTest)
{
 int a[] = { 7, 2, 9, 1, 6 };
 long long n = 5;

 double time = timer(3, a, n);

 ASSERT_EQUAL(0.0, time);
}

CTEST(timer_test, mergeSortTest)
{
 int a[] = { 7, 2, 9, 1, 6 };
 long long n = 5;

 double time = timer(4, a, n);

 ASSERT_EQUAL(0.0, time);
}

CTEST(timer_test, quickSortTest)
{
 int a[] = { 7, 2, 9, 1, 6 };
 long long n = 5;

 double time = timer(5, a, n);
 ASSERT_EQUAL(0.0, time);
}

