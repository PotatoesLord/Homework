#include <iostream> 
#include "fracture.h"


using namespace std;

int main()
{
	int input, numer, denum;

	cout << "Make a fraction\n";

	cin >> numer >> denum;

	fracture fract{ numer,denum };
	fracture_operations fracture(fract);

	enum menu {SET = 1, GET, X, DIV, PLS, MNS, CONTRACTION};

	do{
		cout << "0 - exit\n1 - Set\n2 - Get\n3 - Multiply\n4 - Divide\n5 - Plus\n6 - Minus\n7 - Contraction\n";
		cin >> input;
		switch (input) {
		case SET:
			cin >> numer >> denum;

			fract.numerator = numer;
			fract.denominator = denum;

			fracture.set(fract);

			break;
		case GET:
			fract = fracture.get();

			cout << fract.numerator << "/" << fract.denominator;

			break;
		case X:
			cin >> numer >> denum;

			fract.numerator = numer;
			fract.denominator = denum;

			fracture.multi(fract);

			break;
		case DIV:
			cin >> numer >> denum;

			fract.numerator = numer;
			fract.denominator = denum;

			fracture.div(fract);

			break;
		case PLS:
			cin >> numer >> denum;

			fract.numerator = numer;
			fract.denominator = denum;

			fracture.plus(fract);

			break;
		case MNS:
			cin >> numer >> denum;

			fract.numerator = numer;
			fract.denominator = denum;

			fracture.min(fract);

			break;
		case CONTRACTION:
			fracture.Contraction();

			break;
		}
		cout << '\n';

	} while (input != 0);

	return 0;
}