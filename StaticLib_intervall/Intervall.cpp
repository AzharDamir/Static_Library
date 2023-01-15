
#include "pch.h"
#include "Intervall.h"
#include <iostream>



using namespace I;
using namespace std;

I::Intervalle::Intervalle(double a, double b)
{
	if (a < b)
	{
	this->max = b;
	this->min = a;
	}
	if (b < a)
	{
		this->min = b;
		this->max = a;
	}
}

double I::Intervalle::minimum()
{
	return this->min;
}

double I::Intervalle::maximum()
{
	return this->max;
}

void I::Intervalle::afficher()
{
	cout << "[";
	cout << this->min;
	cout <<  ",";
	cout <<  this->max;
	cout << "]\n";
}

bool I::Intervalle::appartient(double a)
{
	if (a >= this->min && a <= this->max)
	{
		cout << "ce nombre appartient a notre intervalle\n";
		return true;
	}
	cout << "ce nombre n'apparetient pas a cette intervalle\n";
	return false;
}

