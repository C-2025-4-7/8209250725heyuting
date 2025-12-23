#include <iostream>
using namespace std;
void bubbleSort(double arr[], int size)
{
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < size - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				double r = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = r;
				changed = true;
			}
	} while (changed);
}
void printArray(double arr[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main()
{
	const int size = 10;
	double list[size];
	cout << "输入十个双精度数字：";
	for (int i = 0; i < size; i++) {
		cin >> list[i];
	}
	bubbleSort(list, size);
	cout << "排序后数字为：";
	printArray(list, size);
	return 0;
}