#include<iostream>
using namespace std;
int main()
{
	const int N = 100;
	bool lockers[101] = { false };
	for (int stu = 1; stu <= N; stu++)
	{
		for (int locker = stu; locker <= N; locker += stu) {
			lockers[locker] = !lockers[locker];
		}
	}
	cout << "开着的储物柜是：";
	for (int i = 1; i <= N; i++) {
		if (lockers[i]==true) {
			cout << i << "\t";
		}
	}
	cout << endl;
	return 0;
}