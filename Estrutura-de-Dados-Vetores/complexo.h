#ifndef COMPLEXO_H
#define COMPLEXO_H
#include <iostream>

class Complexo{
	private:
		double r, i;
	public:
		Complexo(double vr, double vi);
    ~Complexo();
    Complexo();
		double getR();
		double getI();
};

#endif 