#include "Sorting.h"

int main() {
	clock_t start, end;
	int* a;
	double elapsed, temp;
	const int size = 300000;

	cout << "Shaker Sort " << "\n";
	cout << "Sizes: 300000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	ShakerSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;
	
	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	ShakerSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	ShakerSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	ShakerSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	return 0;
}