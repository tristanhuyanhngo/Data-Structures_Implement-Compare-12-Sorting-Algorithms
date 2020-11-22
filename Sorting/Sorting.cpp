#include "Sorting.h"

// Addtional Function
void SwapData(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void PrintArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << "\n";
}

int BinaryInsertionSearch(int a[], int start, int end, int key) {
	if (start > end)
		return start;

	int middle = (start + end) / 2;

	if (key < a[middle])
		return BinaryInsertionSearch(a, start, middle - 1, key);
	else
		return BinaryInsertionSearch(a, middle + 1, end, key);
}

void Heapify(int a[], int n, int i) {
		int largest = i; // Initialize largest as root
		int l = 2 * i + 1; // left = 2*i + 1
		int r = 2 * i + 2; // right = 2*i + 2

		// If left child is larger than root
		if (l < n && a[l] > a[largest])
			largest = l;

		// If right child is larger than largest so far
		if (r < n && a[r] > a[largest])
			largest = r;

		// If largest is not root
		if (largest != i) {
			SwapData(&a[i], &a[largest]);

			// Recursively heapify the affected sub-tree
			Heapify(a, n, largest);
		}
}

void MergeArray(int a[], int left, int right, int middle) {
	int n1 = middle - left + 1, n2 = right - middle;
	int* L = new int[n1];
	int* R = new int[n2];
	
	for (int i = 0; i < n1; i++) {
		L[i] = a[left + i];
	}

	for (int j = 0; j < n2; j++) {
		R[j] = a[middle + 1 + j];
	}

	int i = 0, j = 0, k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		a[k] = R[j];
		j++;
		k++;
	}

	delete[] L;
	delete[] R;
}

int Partition(int a[], int left, int right) {
	SwapData(&a[(left + right) / 2], &a[right]);
	int partitionIndex = left, pivot = a[right];
	
	for (int i = left; i < right; i++) {
		if (a[i] <= pivot) {
			SwapData(&a[i], &a[partitionIndex]);
			partitionIndex++;
		}
	}
	SwapData(&a[right], &a[partitionIndex]);

	return partitionIndex;
}

int getMax(int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

void countingSortRadix(int a[], int size, int place) {
	const int max = 10;
	int* output = new int[size];
	int count[max];

	for (int i = 0; i < max; ++i)
		count[i] = 0;

	// Calculate count of elements
	for (int i = 0; i < size; i++)
		count[(a[i] / place) % 10]++;

	// Calculate cummulative count
	for (int i = 1; i < max; i++)
		count[i] += count[i - 1];

	// Place the elements in sorted order
	for (int i = size - 1; i >= 0; i--)
	{
		output[count[(a[i] / place) % 10] - 1] = a[i];
		count[(a[i] / place) % 10]--;
	}

	for (int i = 0; i < size; i++)
		a[i] = output[i];
}
/*__________________________________________________________________________________________________________*/
// Generate Data
void GenerateRandomData(int a[], int n) {
	srand((unsigned int)time(NULL));

	for (int i = 0; i < n; i++) {
		a[i] = rand() % n;
	}
}

void GenerateSortedData(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
}

void GenerateReverseData(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = n - 1 - i;
	}
}

void GenerateNearlySortedData(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}

	srand((unsigned int)time(NULL));
	
	for (int i = 0; i < 10; i++) {
		int r1 = rand() % n;
		int r2 = rand() % n;
		SwapData(&a[r1], &a[r2]);
	}
}
/*__________________________________________________________________________________________________________*/

// Set 2 (12 Algorithms): Selection Sort, Insertion Sort, Binary-Insertion Sort, Bubble Sort, Shaker
// Sort, Shell Sort, Heap Sort, Merge Sort, Quick Sort, Counting Sort, Radix Sort, and Flash Sort.
void SelectionSort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int minIndex = i, minValue = a[i];
		for (int j = i + 1; j < n; j++) {
			if (a[j] < minValue) {
				minValue = a[j];
				minIndex = j;
			}
		}
		SwapData(&a[i], &a[minIndex]);
	}
}

void InsertionSort(int a[], int left, int right) {
	for (int i = left + 1; i <= right; i++) {
		int j = i - 1, key = a[i];

		while (j >= left && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

void BubbleSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = n - 1; j >= i; j--) {
			if (a[j] < a[j - 1]) {
				SwapData(&a[j], &a[j - 1]);
			}
		}
	}
}

void BinaryInsertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int key = a[i];
		int insertedPosition = BinaryInsertionSearch(a, 0, i - 1, key);

		for (int j = i - 1; j >= insertedPosition; j--) {
			a[j + 1] = a[j];
		}

		a[insertedPosition] = key;
	}
}

void ShakerSort(int a[], int n) {
	int left = 0, right = n - 1;
	int index = 0;

	while (left < right)
	{
		for (int i = left; i < right; i++)
		{
			if (a[i] > a[i + 1])
			{
				SwapData(&a[i], &a[i + 1]);
				index = i;
			}
		}

		right = index;
		
		for (int i = right; i > left; i--)
		{
			if (a[i] < a[i - 1])
			{
				SwapData(&a[i], &a[i - 1]);
				index = i;
			}
		}

		left = index;
	}
}

void ShellSort(int a[], int n) {
	int j;

	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = 0; i < n; i += gap)
		{
			int temp = a[i];
			for (j = i; j > 0 && a[j - gap] > temp; j = j - gap)
			{
				a[j] = a[j - gap];
			}
			a[j] = temp;
		}
	}
}

void HeapSort(int a[], int n) {
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		Heapify(a, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i > 0; i--) {
		// Move current root to end
		SwapData(&a[0], &a[i]);

		// call max heapify on the reduced heap
		Heapify(a, i, 0);
	}
}

void MergeSort(int a[], int left, int right) {
	if (left < right) {
		int middle = (left + right) / 2;
		MergeSort(a, left, middle);
		MergeSort(a, middle + 1, right);
		MergeArray(a, left, right, middle);
	}
}

void QuickSort(int a[], int left, int right) {
	if (left < right) {
		int partitionIndex = Partition(a, left, right);
		QuickSort(a, left, partitionIndex - 1);
		QuickSort(a, partitionIndex + 1, right);
	}
}

void CountingSort(int a[], int n) {
	int maxValue = a[0], minValue = a[0];
	
	for (int i = 0; i < n; i++) {
		if (a[i] > maxValue) {
			maxValue = a[i];
		}
		else if (a[i] < minValue) {
			minValue = a[i];
		}
	}

	int size = maxValue - minValue + 1;
	int* countingArray = new int[size];

	for (int i = 0; i < size; i++) {
		countingArray[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		countingArray[a[i] - minValue]++;
	}

	for (int i = 1; i < size; i++) {
		countingArray[i] += countingArray[i - 1];
	}

	int* result = new int[n];
	for (int i = 0; i < n; i++) {
		result[countingArray[a[i] - minValue] - 1] = a[i];
		countingArray[a[i] - minValue] --;
	}

	for (int i = 0; i < n; i++) {
		a[i] = result[i];
	}

	delete[] countingArray;
	delete[] result;
}

void RadixSort(int a[], int n) {
	// Get maximum element
	int max = getMax(a, n);

	// Apply counting sort to sort elements based on place value.
	for (int place = 1; max / place > 0; place *= 10)
		countingSortRadix(a, n, place);
}

void FlashSort(int a[], int n, int m) {
	int imax, max, min, key;
	int* temp = new int[m];
	max = min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
	}
	for (int i = 0; i < m; i++)
	{
		temp[i] = 0;
	}
	int c;
	c = (m - 1) / (max - min);
	for (int i = 0; i < n; i++)
	{
		key = 1 + int(c * (a[i] - min));
		temp[key]++;
	}
	for (int i = 1; i < m; i++)
	{
		temp[i] += temp[i - 1];
	}
	int move = 0, j = 0;
	while (move < n)
	{
		while (j > temp[m - 1])
		{
			j++;
			key = 1 + int(c * (a[j] - min));
		}
		int flash = a[j];
		while (j < temp[key])
		{
			key = 1 + int((flash - min) * c);
			int hold = temp[key] - 1;
			int temp2 = a[temp[key] - 1];
			a[temp[key] - 1] = flash;
			flash = temp2;
			temp[key]--;
			move++;
		}
	}
	for (int i = 1; i < n; i++)
	{
		int j = i - 1;
		int key = a[i];
		while (a[j] > key && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

// Bonus - Hybrid Sorting (3 Algorithms): Timsort(Python), Introsort(C++), Blocksort
void Timsort(int a[], int n) {
	const int RUN = 32;

	for (int i = 0; i < n; i += RUN) {
		InsertionSort(a, i, min(i + 31, n - 1));
	}

	for (int size = RUN; size < n; size *= 2) {
		for (int left = 0; left < n; left += 2 * size) {
			int middle = left + size - 1;
			int right = min((left + 2 * size - 1),(n - 1));
			MergeArray(a, left, right, middle);
		}
	}
}

void Introsort(int a[], int n) {
	
}

void Wikisort(int a[], int n) {

}