#include<iostream>
using namespace std;
class cuboid {
private:
	int length;
	int width;
	int height;
public:
	int cal();
	void set(int a, int b, int c);
	void show()
	{
		cout << "体积为:" << cal() << endl;
	}
};
int cuboid::cal()
{
	return length * width * height;
}
void cuboid::set(int a,int b,int c)
{
	length = a;
	width = b;
	height = c;
}
int main()
{
	cout << "分别输入三个长方体的长，宽，高:"<<endl;
	int a1, b1, c1, a2, b2, c2, a3, b3, c3;
	cin >> a1 >>b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3;
	cuboid C1;
	C1.set(a1, b1, c1);
	C1.show();
	cuboid C2;
	C2.set(a2, b2, c2);
	C2.show();
	cuboid C3;
	C3.set(a3, b3, c3);
	C3.show();
	return 0;
}