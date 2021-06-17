// functionOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Function overload

#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
	cout << sum(3, 4) << endl;
	cout << sum(4.4, 3.3) << endl;
	cout << sum(1.1, 2.2, 3.3) << endl;
	
	system("pause>0");
}

int sum(int a, int b) {
	return a+b;
}
double sum(double a, double b) {
	return a + b;
}
float sum(float a, float b, float c) {
	return a + b + c;
}