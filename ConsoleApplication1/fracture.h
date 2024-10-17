#pragma once
struct fracture {
	int numerator, denominator;
};

class fracture_operations{
	fracture fract;

	int greatest_common_divisor(int a, int b);

public:
	fracture_operations(fracture fracture_P) : fract{ fracture_P }{}
	int set(fracture fracture_P);
	fracture get();
	fracture multi(fracture fracture_P);
	fracture div(fracture fracture_P);
	fracture plus(fracture fracture_P);
	fracture min(fracture fracture_P);
	void Contraction();
};