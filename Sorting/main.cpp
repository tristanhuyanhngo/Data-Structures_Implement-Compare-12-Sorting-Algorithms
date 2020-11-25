#include "Sorting.h"

int main() {
	clock_t start, end;
	int* a;
	double elapsed, temp;
	int size;

	// Selection Sort
	cout << "Selection Sort" << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 3000;

	cout << "Sizes: 3000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 10000;

	cout << "Sizes: 10000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	/*__________________________________________________________________________________________________________*/
	size = 30000;

	cout << "Sizes: 30000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 100000;

	cout << "Sizes: 100000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 300000;

	cout << "Sizes: 300000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	SelectionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";

	// Bubble Sort
	cout << "Bubble Sort " << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 3000;

	cout << "Sizes: 3000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 10000;

	cout << "Sizes: 10000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	/*__________________________________________________________________________________________________________*/
	size = 30000;

	cout << "Sizes: 30000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 100000;

	cout << "Sizes: 100000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 300000;

	cout << "Sizes: 300000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BubbleSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";

// Shaker Sort
	cout << "Shaker Sort " << "\n";
/*__________________________________________________________________________________________________________*/
	size = 3000;
	
	cout << "Sizes: 3000 " << "\n";
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

	cout << "\n";
/*__________________________________________________________________________________________________________*/
	size = 10000;

	cout << "Sizes: 10000 " << "\n";
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

/*__________________________________________________________________________________________________________*/
	size = 30000;

	cout << "Sizes: 30000 " << "\n";
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
	
	cout << "\n";
/*__________________________________________________________________________________________________________*/
	size = 100000;

	cout << "Sizes: 100000 " << "\n";
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

	cout << "\n";
/*__________________________________________________________________________________________________________*/
	size = 300000;

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

	cout << "\n";

// Insertion Sort
	cout << "Insertion Sort " << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 3000;

	cout << "Sizes: 3000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 10000;

	cout << "Sizes: 10000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	/*__________________________________________________________________________________________________________*/
	size = 30000;

	cout << "Sizes: 30000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 100000;

	cout << "Sizes: 100000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 300000;

	cout << "Sizes: 300000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	InsertionSort(a, 0, size - 1);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";

// Binary Insertion Sort
	cout << "Binary Insertion Sort " << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 3000;

	cout << "Sizes: 3000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 10000;

	cout << "Sizes: 10000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	/*__________________________________________________________________________________________________________*/
	size = 30000;

	cout << "Sizes: 30000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 100000;

	cout << "Sizes: 100000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 300000;

	cout << "Sizes: 300000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	BinaryInsertionSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

// Shell Sort
	cout << "Shell Sort " << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 3000;

	cout << "Sizes: 3000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 10000;

	cout << "Sizes: 10000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	/*__________________________________________________________________________________________________________*/
	size = 30000;

	cout << "Sizes: 30000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 100000;

	cout << "Sizes: 100000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";
	/*__________________________________________________________________________________________________________*/
	size = 300000;

	cout << "Sizes: 300000 " << "\n";
	// Random Data
	cout << "Random Data: ";
	a = new int[size];
	GenerateRandomData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Sorted Data
	cout << "Sorted Data: ";
	a = new int[size];
	GenerateSortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Reverse Sorted Data
	cout << "Reverse Data: ";
	a = new int[size];
	GenerateReverseData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	// Nearly Sorted Data
	cout << "Nearly Sorted Data: ";
	a = new int[size];
	GenerateNearlySortedData(a, size);
	start = clock();
	ShellSort(a, size);
	end = clock();
	elapsed = double(end - start) / CLOCKS_PER_SEC;
	cout << fixed << elapsed << "s" << "\n";
	delete[] a;

	cout << "\n";