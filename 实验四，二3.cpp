#include<iostream>
using namespace std;
void sortArray(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i-1; j++) {
			if (*(arr+j) > *(arr+j + 1)) {
				int temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
}
int main()
{
	cout << "输入数组元素个数：" << endl;
	int n;
	cin >> n;
	int* arr = new int[n];
	cout << "输入数组元素：" << endl;
	for (int a=0; a < n; a++) 
		cin >> *(arr+a);
	sortArray(arr, n);
	for (int i = 0; i < n; i++) 
		cout << *(arr + i) << "\t";
		cout << endl;
	delete[]arr;
	return 0;
}