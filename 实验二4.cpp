#include<iostream>
using namespace std;
int main()
{
	cout << "输入算式（格式：数1 运算符 数2）" << endl;
	double num1, num2;
	char op;
	cin >> num1 >> num2;
	cin >> op;
	double result;
	switch (op)
	{
	case'+':
		result = num1 + num2;
		break;
	case'-':
		result = num1 - num2;
		break;
	case'*':
			result = num1 * num2;
			break;
	case'/':
		if (num2 != 0)
			result = num1 / num2;
		else if (num2 == 0)
			cout << "无意义" << endl;
		break;
	case'%':
				if (int(num2) != 0)
			result = int(num1) % int(num2);
		else if (int(num2) == 0)
			cout << "无意义" << endl;
				break;
	default:
		cout << "错误" << endl;
		break;
		return 0;
	}
}