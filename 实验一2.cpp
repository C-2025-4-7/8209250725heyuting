#include<iostream>
using namespace std;
int main()
{
	double r, h, V;
	const double pi = 3.14;
	cout << "input r and h" << endl;
	cin >> r >> h;

	V = pi * r * r * h;

	cout << "V=" << V << endl;

}