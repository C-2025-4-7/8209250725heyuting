#include<iostream>
using namespace std;
int main()
{
	cout << "输入三角形的三边长" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "此三角形周长为:" << a + b + c << endl;
	}
	else
		cout << "此三角形不存在" << endl;
	if (a == b || a == c || b == c)
		cout << "此三角形为等腰三角形" << endl;
		return 0;
}