#include "sorts.h"
#include "ctest.h"

CTEST(selection_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  selectionSort(arr, n);
  ASSERT_ARRAY(expected, arr, n);
}

CTEST(bubble_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  bubbleSort(arr, n);
  ASSERT_ARRAY(expected, arr, n);
}

CTEST(insertion_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  insertionSort(arr, n);
  ASSERT_ARRAY(expected, arr, n);
}

CTEST(merge_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  mergeSort(arr, n);
  ASSERT_ARRAY(expected, arr, n);
}

CTEST(quick_sort, sort_array)
{
  int arr[] = {4, 2, 5, 3, 1};
  int expected[] = {1, 2, 3, 4, 5};
  const int n = sizeof(arr)/sizeof(int);
  quickSort(arr, n);
  ASSERT_ARRAY(expected, arr, n);
}

