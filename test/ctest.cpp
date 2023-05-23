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

