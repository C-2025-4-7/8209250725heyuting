#include<iostream>
#include "mytemperature.h";
using namespace std;
int main()
{
	cout << "Celsius" << "\t" << "Fahrenheit" << "|" << "Fahrenheit" << "\t" << "Celsius" << endl;
	double a = 40.0;
	double b = 120.0;
	double c = 39.0;
	double d= 110.0;
	double e= 31.0;
	double f= 30.0;
	cout << a << "\t" << celsius_to_fah(a) << "\t" << "|" << b << "\t" << fahrenheit_to_cels(b) << endl;
	cout << c << "\t" << celsius_to_fah(c) << "\t" << "|" << d <<"\t" << fahrenheit_to_cels(d) << endl;
	cout << e << "\t" << celsius_to_fah(e) << "\t" << "|" << f << "\t" << fahrenheit_to_cels(f) << endl;
	return 0;
}
