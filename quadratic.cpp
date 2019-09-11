#include <iostream>
#include <iomanip>

float a, b, c, two = 2.0, four = 4.0, num1 = 0, num2 = 0, x1 = 0, x2 = 0, negOne = -1.0;

void prompt() {
	std::cout << "To see the two real roots of aX^2+ bX + c=0, enter the a,b, and c values:";
	std::cin >> a >> b >> c;
}

void printRoots() {
	std::cout << "a: " << a << "\tb: " << b << "\tc: " << c;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "num1 " << num1 << std::endl;
	std::cout << std::sendl;
	std::cout << "X1=" << x1 << "\tX2:" << x2;
	std::cout << std::endl;
}

int main() {
	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	__asm {
		call prompt;

		fld b;
		fld b;
		fmul;

		fld c;
		fld a;
		fmul;
		fld four;
		fmul;

		fsub;

		fsqrt;

		fld b;
		fld negOne;
		fmul;

		fadd;

		fld two;
		fld a;
		fmul;
		fdiv;
		fstp x1;



		fld b;
		fld b;
		fmul;

		fld c;
		fld a;
		fmul;
		fld four;
		fmul;

		fsub;

		fsqrt;

		fld b;
		fadd;

		fld negOne;
		fmul;

		fld two;
		fld a;
		fmul;
		fdiv;
		fstp x2;

		call printRoots;
	}
	std::cout << "Press enter to continue ...";
	std::cin.get();
	return 0;
}
