#include <iostream>
using namespace std;
int peach(int d)
{
	if (d == 10) {
		return 1;
	}
	return (peach((d+1))+1)*2;
}
int main()
{
	cout << peach(1) << endl;
	return 0;
}