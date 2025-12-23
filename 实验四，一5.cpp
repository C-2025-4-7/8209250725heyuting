#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) return -1;
    for (int i = 0; i <= len2 - len1; ++i) {
        bool found = true;
        for (int j = 0; j < len1; ++j) { 
            if (s2[i + j] != s1[j]) { found = false; break; }
        }
        if (found) return i;
    }
    return -1;
}

int main() {
    const int SIZE = 20;
    char s1[SIZE];
    char s2[SIZE];

    cout << "Enter the first string:" << endl;
    cin.getline(s1, SIZE);
    cout << "Enter the second string:" << endl;
    cin.getline(s2, SIZE);

    int result = indexOf(s1, s2);
    cout << "indexOf(" << s1 << ", " << s2 << ") is " << result << endl;
    return 0;
}