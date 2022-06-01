#include "Form.h"
#include <math.h>

Formm::Formm() : a(0), b(0), n(0) { };
Formm::Formm(double a0, double b0, double n0) : a(a0), b(b0), n (n0) { };
double Formm::func1(double a, double b) {
		if (a >= b) {
			if (a - b < 0) {
				std::cout << "Error!";
			}
			else {
				n = (pow(a - b, 3));
				return n;
			}
		}
		else {
			if (sin(a * b) == 0) {
				std::cout << "Error!";
			}
			else {
				n= (pow(a, 2) + (a - b) / sin(a * b));
				return n;
			}

		}
	}
double Formm::func2(double a, double b, double n) {
	if (n < b) {
		if (pow(sin(a), 2) - cos(n) < 0 || b == 0) {
			std::cout << "Error!";
		}
		else {
			return ((n + a) / (-b)) + pow(pow(sin(a), 2) - cos(n), (1 / 2));
		}
	}
	else if (n == b) {
		return pow(b, 2) + tan(a * n);
	}
	else {
		return pow(b, 3) + pow(a, 2) * n;
	}
}
Formm::~Formm() { };