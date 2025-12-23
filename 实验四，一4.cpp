#include<iostream>
#include<vector>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2,int list3[])
{
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++) {
		list3[size1 + i] = list2[i];
	}
	int SIZE = size1 + size2;
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - 1 - i; j++) {
			if (list3[j] > list3[j + 1]) {
				int r = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = r;
			}
		}
	}
}
int main()
{
	int size1, size2;
	cout << "输入第一个数组元素个数：" << endl;
	cin >> size1;
	cout << "输入第一个数组：";
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "输入第二个数组元素个数：" << endl;
	cin >> size2;
	cout << "输入第二个数组：";
	int* list2 = new int[size2];
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	cout << "合并后数组为：";
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << "\t";
	}
	cout << endl;
	delete[] list1;
	delete[] list2;
	delete[] list3;
	return 0;
}