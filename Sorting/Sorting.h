#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <fstream>

using namespace std;

// Addtional Function
void SwapData(int* a, int* b);
void PrintArray(int a[], int n);
int BinaryInsertionSearch(int a[], int start, int end, int key);
void Heapify(int a[], int n, int i);
void MergeArray(int a[], int left, int right, int middle);
int Partition(int a[], int left, int right);
int getMax(int a[], int n);
void countingSortRadix(int a[], int size, int place);

// Generate Data
void GenerateRandomData(int a[], int n);
void GenerateSortedData(int a[], int n);
void GenerateReverseData(int a[], int n);
void GenerateNearlySortedData(int a[], int n);

// Sorting Algorithms
void SelectionSort(int a[], int n);
void InsertionSort(int a[], int left, int right);
void BubbleSort(int a[], int n);
void BinaryInsertionSort(int a[], int n);
void ShakerSort(int a[], int n);
void ShellSort(int a[], int n);
void HeapSort(int a[], int n);
void MergeSort(int a[], int left, int right);
void QuickSort(int a[], int left, int right);
void CountingSort(int a[], int n);
void RadixSort(int a[], int n);
void FlashSort(int a[], int n, int m);

// Hybrid Algorithms
void Timsort(int a[], int n);
void Introsort(int a[], int n);
void Wikisort(int a[], int n);