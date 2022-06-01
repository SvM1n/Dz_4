#ifndef FORM_H
#define FORM_H
#include <iostream>
class Formm {
private:
	double a;
	double b;
	double n;
public:
	Formm();
	Formm(double a0, double b0, double n0);
	double func1(double a, double b);
	double func2(double a, double b, double n);
	~Formm();
};
#endif
