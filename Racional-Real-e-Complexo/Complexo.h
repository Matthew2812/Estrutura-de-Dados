#ifndef COMPLEXO_H
#define COMPLEXO_H
#include <iostream>

class Complexo{
	private:
		double r, i;
    char sinalR, sinalI;
	public:
		Complexo(double vr, double vi, char sinalR, char sinalI);
		Complexo operator+(Complexo c);
    Complexo operator-(Complexo c);
    Complexo operator*(Complexo c);
		double getR();
		double getI();
};

#endif