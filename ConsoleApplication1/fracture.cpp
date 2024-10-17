#include "fracture.h"

int fracture_operations::set(fracture fracture_P) {
	if (fracture_P.numerator != 0 || fracture_P.denominator != 0) {
		fract = fracture_P;
		return 0;
	}
	else {
		return -1;
	}
}

fracture fracture_operations::get() {
	return fract;
}

fracture fracture_operations::multi(fracture fracture_P) {
	fract.numerator *= fracture_P.numerator;
	fract.denominator *= fracture_P.denominator;

	return fract;
}

fracture fracture_operations::div(fracture fracture_P) {
	fract.numerator *= fracture_P.denominator;
	fract.denominator *= fracture_P.numerator;

	return fract;
}

fracture fracture_operations::plus(fracture fracture_P) {
	int bull_denominator = fract.denominator;

	fract.numerator *= fracture_P.denominator;
	fract.denominator *= fracture_P.denominator;
	fracture_P.numerator *= bull_denominator;
	fracture_P.denominator *= bull_denominator;

	fract.numerator += fracture_P.numerator;

	return fract;
}

fracture fracture_operations::min(fracture fracture_P) {
	int bull_denominator = fract.denominator;

	fract.numerator *= fracture_P.denominator;
	fract.denominator *= fracture_P.denominator;
	fracture_P.numerator *= bull_denominator;
	fracture_P.denominator *= bull_denominator;

	fract.numerator -= fracture_P.numerator;

	return fract;
}

int fracture_operations::greatest_common_divisor( int a,  int b) {
	if (a % b == 0)
			return b;
	if (b % a == 0)
			return a;
	if (a > b)
			return greatest_common_divisor(a % b, b);
	return greatest_common_divisor(a, b % a);
}

void fracture_operations::Contraction() {
	int nod = greatest_common_divisor(fract.numerator, fract.denominator);
	fract.numerator /= nod;
	fract.denominator /= nod;
}