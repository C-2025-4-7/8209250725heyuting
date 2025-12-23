#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	if (!s1 || !s2)return -1;
	for (int i = 0; s2[i] != '\0'; i++) {
		int j = 0;
		while (s1[j] != '\0' && s2[i + j] != '\0' && s1[j] == s2[i + j]) {
			j++;
		}
		if (s1[j] == '\0')
			return i;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cin >> s1 >> s2;
	cout << indexof(s1, s2) << endl;
	return 0;
}