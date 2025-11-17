#include<iostream>
using namespace std;
int main()
{
	cout << "输入两个正整数:" << endl;
	int a, b;
	cin >> a >> b;
	int gcd = 1;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	cout << "最大公约数为：" << gcd << endl;

    return 0;
}