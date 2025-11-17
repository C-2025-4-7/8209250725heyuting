#include<iostream>
using namespace std;
int main()
{
	cout << "输入华氏温度" << endl;
	double f;
	cin >> f;
	double c;
	c = (f - 32) * 5 / 9;
	cout << "摄氏温度为：" << c << endl;
	return 0;
}