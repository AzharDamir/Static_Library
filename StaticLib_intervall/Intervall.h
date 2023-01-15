#pragma once

namespace I {
	class Intervalle
	{
	private:
		double max;
		double min;
	public:

		Intervalle(double a, double b);
		double minimum();
		double maximum();
		void afficher();
		bool appartient(double a);
	};
}