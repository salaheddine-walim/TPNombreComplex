#pragma once
#include<iostream>

using namespace std;
class Complex
{
private:
	double im;
	double re;
public:
	Complex();
	Complex(double, double);
	void print();
	double module();
	Complex conjugue();
	bool operator==(const Complex &c);
	Complex operator+(const Complex &c);
	Complex operator+(double);
	Complex operator*(const Complex& c);
	
	//~Complex();
};