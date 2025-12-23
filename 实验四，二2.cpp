#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	for (int i = 0; hexString[i] != '\0'; i++) {
		char c = hexString[i];
		int value;
		if (c >= '\0' && c <= '\9')
			value = c - '\0';
		else if (c >= 'A' && c <= 'F')
			value = c - 'A' + 10;
		else if (c >= 'a' && c <= 'f')
			value = c - 'a' + 10;
		else
			break;
		result = result * 16 + value;
	}
	return result;
}
int main()
{
	char hex[100];
	cin >> hex;
	cout << parseHex(hex) << endl;
	return 0;
}