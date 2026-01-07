#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "修改后坐标值为：(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p1;
	p1.setPoint(10, 10);
	p1.display();
	return 0;
}