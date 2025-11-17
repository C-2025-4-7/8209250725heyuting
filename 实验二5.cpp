#include<iostream>
using namespace std;
int main()
{
	cout << "输入一行字符" << endl;
	char ch;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	while (cin.get(ch) && ch != '\n')
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			letters++;
		else if (ch == '/n')
			spaces++;
		else if (ch >= '0' && ch <= '9')
			digits++;
		else
			others++;
		cout << "字母个数为：" << letters << '/n' << "空格个数为：" << spaces << '/n' << "数字个数为：" << digits << '/n' << "其他字符个数为：" << others << endl;
	}
	return 0;
}