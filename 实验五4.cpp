#include<iostream>
using namespace std;
class student
{
private:
	int num;
	float score;
public:
	void setdata(int stuid, float stuscore) {
		num = stuid;
		score = stuscore;
	}
	int getnum() {
		return num;
	}
	float getscore() {
		return score;
	}
	void display() {
		cout << "学号为:" << num << ",成绩:" << score << endl;
	}
};
void max(student* students, int n) {
	float highestScore = students[0].getscore();
	int highestIndex = 0;
	for (int i = 1; i < n; i++) {
		if (students[i].getscore() > highestScore) {
			highestScore = students[i].getscore();
			highestIndex = i;
		}
	}
	cout << "\n最高成绩为:\t" << students[highestIndex].getscore() << "其学号为:" << students[highestIndex].getnum();

}
int main()
{
	const int SIZE = 5;
	student students[SIZE];
	cout << "输入5位学生的信息" << endl;
	for (int i = 0; i < SIZE; i++) {
		int num;
		float score;
		cin >> num >> score;
		students[i].setdata(num, score);
	}
	max(students, SIZE);
	return 0;
}