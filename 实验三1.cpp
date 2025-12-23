#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int gcd_lcm(int a, int b)
{
	int l;
	l = a * b / gcd(a, b);
	return l;
}
int main()
{
	int a, b;
	cout << "请输入两位数：";
	cin >> a >> b;
	int l = gcd_lcm(a, b);
	cout << "它们的最大公约数为：" << gcd(a, b) << "\n" << "最小公倍数为：" << l << endl;
	return 0;
}