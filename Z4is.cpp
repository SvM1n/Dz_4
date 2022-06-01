#include "Form.h"
int main()
{
	setlocale(LC_ALL, "rus");
	Formm f;
	double q = 0;
	double w = 0;
	double n = 0;
	std::cout << "\nВведите значения a и b: ";
	std::cin >> q >> w;
	std::cout<<f.func1(q, w)<<std::endl;
	std::cout<<f.func2(q, w, n)<<std::endl;
}