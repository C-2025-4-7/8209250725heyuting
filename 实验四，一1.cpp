#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int num[size];
	int distinct[size];
	int distinctCount = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < size; i++)
	{
		bool isnew = true;
		for (int j = 0; j < distinctCount; j++)
		{
			if (num[i] == distinct[j]) {
				isnew = false;
				break;
			}
		}
		if (isnew) {
			distinct[distinctCount] = num[i];
			distinctCount++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < distinctCount; i++) {
		cout << distinct[i]<<"\t";
	}
	cout << endl;
	return 0;
}