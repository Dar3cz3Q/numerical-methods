#pragma once
#include <cstdint>

#include "../Numerical_Methods.h"
#include "LegendrePolynomial.h"
#include "Const/KronrodNodes.h"

namespace NumericalMethods::Integrals {
	/// <summary>
	/// Funkcja obliczajaca przyblizenie calek oznaczonych. Metoda Gauss-Legendre
	/// </summary>
	/// <param name="x0">Poczatek przedzialu calkowania</param>
	/// <param name="xn">Koniec przedzialu calkowania</param>
	/// <param name="n">Dokladnosc</param>
	/// <param name="function">Wskaznik funkcji do calkowania</param>
	/// <returns>Obliczona wartosc calki</returns>
	double gauss_Legendre(const double x0, const double xn, const uint32_t n, double (*function)(double));

	double gauss_Kronrod(const double a, const double b, const uint32_t n, double (*function)(double));
} // namespace NumericalMethods::Integrals