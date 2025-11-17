#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnit = 63;
	cout << "output in unsigned int 1 type:" << testUnit << endl;
	cout << "output in char type:" << static_cast<char>(testUnit) << endl;
	cout << "output in short type:" << static_cast<short>(testUnit) << endl;
	cout << "output in int type:" << static_cast<int>(testUnit) << endl;
	cout << "output in double type:" << static_cast<double>(testUnit) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnit) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnit << endl;
	cout << "output in Oct unsigned int type:" << oct << testUnit << endl;
	system("pause");
	return 0;
}

